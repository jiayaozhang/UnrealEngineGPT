# 导入所需的库
from transformers import AutoTokenizer, AutoModelForCausalLM, GenerationConfig
import torch
import streamlit as st

from modelscope import snapshot_download

# 在侧边栏中创建一个标题和一个链接
with st.sidebar:
    st.markdown("## Reference Project Links")
    "[📝 InternLM Notes](https://github.com/jiayaozhang/InternLM_Notes)"
    "[📝 UEGPT](https://github.com/jiayaozhang/UnrealEngineGPT)"
    # 创建一个滑块，用于选择最大长度，范围在0到1024之间，默认值为512
    max_length = st.slider("max_length", 0, 1024, 512, step=1)
    system_prompt = st.text_input("System_Prompt", "( ๑ ˃̵ᴗ˂̵)و 💕现在你是UE的专家")

# 创建一个标题和一个副标题
st.title("😎 UEGPT-Chat")
st.caption("🚀 A streamlit chatbot powered by InternLM2 QLora")

# 定义模型路径

model_id = 'Jannie/UEGPT-internlm-20b-qlora-sft-merge'
# model_id ='Jannie/UEGPT-internlm-7b-qlora-sft-merge'
mode_name_or_path = snapshot_download(model_id, revision='master')

# mode_name_or_path = '/root/Firefly/Firefly/checkpoint/UEGPT-internlm-20b-qlora-sft-merge'


# 定义一个函数，用于获取模型和tokenizer
@st.cache_resource
def get_model():
    # 从预训练的模型中获取tokenizer
    tokenizer = AutoTokenizer.from_pretrained(mode_name_or_path, trust_remote_code=True)
    # 从预训练的模型中获取模型，并设置模型参数
    model = AutoModelForCausalLM.from_pretrained(mode_name_or_path, trust_remote_code=True, torch_dtype=torch.bfloat16).cuda()
    model.eval()  
    return tokenizer, model

# 加载Chatglm3的model和tokenizer
tokenizer, model = get_model()

# 如果session_state中没有"messages"，则创建一个包含默认消息的列表
if "messages" not in st.session_state:
    st.session_state["messages"] = []

# 遍历session_state中的所有消息，并显示在聊天界面上
for msg in st.session_state.messages:
    st.chat_message("User").write(msg[0])
    st.chat_message("UEGPT").write(msg[1])

# 如果用户在聊天输入框中输入了内容，则执行以下操作
if prompt := st.chat_input():
    # 在聊天界面上显示用户的输入
    st.chat_message("user").write(prompt)
    # 构建输入     
    response, history = model.chat(tokenizer, prompt, meta_instruction=system_prompt, history=st.session_state.messages)
    # 将模型的输出添加到session_state中的messages列表中
    st.session_state.messages.append((prompt, response))
    # 在聊天界面上显示模型的输出
    st.chat_message("UEGPT").write(response)
