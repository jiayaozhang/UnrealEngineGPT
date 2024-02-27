# UnrealEngineGPT: Unreal Engine Conversational Large Language Model

<div align="left">

![GitHub Repo stars](https://img.shields.io/github/stars/jiayaozhang/UnrealEngineGPT?style=social)
[![Generic badge](https://img.shields.io/badge/🤗-Huggingface%20Repo-green.svg)](https://huggingface.co/Jiayao)
[![Generic badge](https://img.shields.io/badge/🔥-Modelscope-red)](https://www.modelscope.cn/profile/Jannie)
[![Generic badge](https://img.shields.io/badge/🐼-OpenXlab-blue)](https://openxlab.org.cn/apps/detail/Janice/UnrealGPT)


</div>

<img src="img/111.png" width="450" >

Welcome to join the learning of Unreal Engine large model

* 🤗[Chinese Tutorial](README_CN.md)


## News: 😎 Open source model

**Training on 1/2*V100**，After Chinese word list expansion, incremental pre-training, and multiple rounds of instruction fine-tuning. The project also supports efficient incremental pre-training of Baichuan, Qwen, InternLM, LLaMA, Falcon and other models.
🔔Using the training code of this project, and the above training data, we trained and open sourced the following model.

Models：

| Models                                                                             | Huggingface                                | Modelscope|
|--------------------------------------------------------------------------------|-------------------------------------|------------|
| InternLM-UEGPT-7b    | [Huggingface-internLM2-7b](https://huggingface.co/Jiayao/UEGPT-internlm-7b-qlora-sft-merge/tree/main)  | [UEGPT-internLM2-7b](https://www.modelscope.cn/models/Jannie/UEGPT-internlm-7b-qlora-sft-merge/files) |  
| InternLM-UEGPT-20b   | [Huggingface-internLM2-20b](https://huggingface.co/Jiayao/UnrealGPT-internlm-20b-qlora-sft-merge) | [Modelscope-internLM2-20b](https://www.modelscope.cn/models/Jannie/UEGPT-internlm-20b-qlora-sft-merge/files)|  
| UEGPT-Datasets       | [Huggingface-UEGPT-Datasets](https://huggingface.co/datasets/Jiayao/UEGPT-Datasets)     |[Modelscope-UEGPT-Datasets](https://www.modelscope.cn/datasets/Jannie/UEGPT-Datasets/files)     |  

## Related projects

| Project                                                                                        | Description                                                                                    |
|------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------|
| [InternLM Notes](https://github.com/jiayaozhang/InternLM_Notes)  | RAG retrieval enhanced generation supports the use of QLoRA incremental pre-training for large model inference optimization, large model parameter efficient fine-tuning (PEFT), and large model context expansion.|
| [LongQLoRA](https://github.com/yangjianxin1/LongQLoRA) | Large model length extension project can extend the length of LLaMA-13B to 8192 on a single card V100, and the performance is close to MPT-8K                                            |

## Project Description

<img src="img/buldergate.gif" width="450">

**Unreal Engine Conversational Large Language Model** is an open source Unreal Engine large language model project that supports open source models such as QLoRA and full parameter fine-tuning InternLM.

As the name of the project suggests, I hope this project can do its part for the Unreal Engine community and promote the development of games and game engines.
If your training resources are limited, we highly recommend using QLoRA’s instruction fine-tuning method because we have verified the effectiveness of this method on the Open LLM Leaderboard.


🔔 The main contents of this project are as follows：
- 📗 It supports full parameter instruction fine-tuning and QLoRA low-cost and efficient instruction fine-tuning. Among them, QLoRA is an efficient training method that we mainly recommend.
- 📗 Supports most mainstream open source large models, such as Baichuan2, CodeLLaMA, LLaMA2, LLaMA, Qwen, Baichuan, ChatGLM2, InternLM, Ziya, Bloom, XVERSE, etc.
- 📗 Supports weight merging of lora and base model, making reasoning more convenient.
- 📗️ Model cropping：[By LLMPruner: Large Language Model Clipping Tool](https://github.com/yangjianxin1/LLMPruner) ，[Open source tailored Bloom model weights](https://huggingface.co/Jiayao) On the premise of retaining pre-trained Chinese knowledge, the amount of model parameters is effectively reduced, training costs are reduced, and training efficiency is improved.
- 📗 Open source[UEGPT series instructions to fine-tune model weights](https://huggingface.co/Jiayao) 。
- 📗 The effectiveness of the QLoRA training process was verified on the Open LLM Leaderboard.


## Installation Environment
The versions of several major python packages are fixed under requirements.txt. Just execute the following script.

**Attention：we are training based on torch==1.13**
```bash
pip install requirements.txt
```

<!-- ## 模型列表

🔔 使用本项目的训练代码，以及上述训练数据，我们训练并开源了以下模型。

中文模型：

| 模型                                                                             | 基座模型                                | Max Length |
|--------------------------------------------------------------------------------|-------------------------------------|------------|
| [InternLM-UEGPT-7b](https://huggingface.co/YeungNLP/firefly-baichuan2-13b) | internlm/internlm-7b     |1024     |  
| [InternLM-UEGPT-20b](https://huggingface.co/YeungNLP/firefly-baichuan-13b)   | internlm/internlm-20b      |1024     |   -->


## Training Datasets

| [moss-003-sft-data](https://huggingface.co/datasets/YeungNLP/moss-003-sft-data)                               | Chinese and English multi-round dialogue data open sourced by the MOSS team of Fudan University, containing 1 million+ data                                                                       
                                                                            
🔔 Currently, this project refers to the unified data format of Chinese and English multi-round dialogue data open sourced by the MOSS team of Fudan University, and has compiled thousands of Unreal Engine Q&A multi-round data dialogues:


The training data is in jsonl format. The data format of each row is as follows. The conversation field is required and other fields can be added or deleted according to actual needs.
You can refer to the `data/dummy_data.jsonl` file in the project.


```json
  {
    "conversation_id": 390,
    "category": "Brainstorming",
    "conversation": [
      {
        "human": "如何在虚幻引擎中实现水面波纹效果？",
        "assistant": "实现水面波纹效果在虚幻引擎中通常涉及材质编辑器的使用，以及可能应用一些动态模拟技术。以下是一个基础的步骤指南，介绍如何在虚幻引擎中创建水面波纹效果：\n\n### 材质创建\n\n1. **创建水面材质**：首先，你需要创建一个新的材质，用来应用到你的水面对象上。\n   \n2. **使用波纹纹理**：找到适合的波纹纹理或者使用程序生成的模式，比如使用Perlin噪声或简单的正弦波函数来模拟波纹。\n\n3. **纹理坐标和变换**：使用材质编辑器中的纹理坐标（Texture Coordinates）节点与时间（Time）节点，结合一些数学运算，来对纹理进行动态变换，产生波动效果。\n\n4. **反射与折射**：利用虚幻的反射和折射功能使水面更逼真。通常，通过设置材质的反射（Specular）和粗糙度（Roughness）参数，以及可能的折射参数来模拟水光效果。\n\n5. **透明与深度效果**：为了使水面更逼真，还需要调整透明度（Opacity）以及深度效果，这可能包括水底颜色渐变、深度模糊等。\n\n### 动态波纹\n\n1. **顶点位移**：如果需要波纹影响水面的形态（3D效果），可以使用顶点位移（Vertex Displacement）技术，根据波纹纹理来上下移动水面的顶点。\n\n2. **材质参数调整**：创建材质实例，允许在游戏运行时动态调整波纹的强度、速度等。\n\n3. **触发波纹**：对于交互性的波纹（例如物体掉入水面），需要编写蓝图或C++代码来在特定位置触发波纹效果，可以通过在材质中设置参数，并用蓝图或代码动态更新它们来实现。\n\n### 更高级的技术\n\n- **物理模拟**：对于更高级的波纹效果，可以实现基于物理的模拟，如采用一个动态模拟系统或使用顶点着色器和计算着色器进行模拟。\n\n- **涟漪扩散**：为了模拟从一个点向外扩散的涟漪效果，可以采用某种扩散算法，并将其表现在水面材质上。\n\n- **多层波纹效果**：通过叠加不同的波纹图层来创建更复杂的波纹效果。\n\n- **动态环境交互**：实现环境要素（如风、雨滴）与水面交互产生的动态波纹效果。\n\n在实现水面波纹效果时，监视性能也很重要，因为这些效果有时会非常消耗GPU资源。务必管理好材质的复杂度，并考虑只在玩家视野范围内使用更高级的效果，而在远处采用更简化的表现。"
     },
     {
        "human": "虚幻引擎中的自适应曝光是如何调整场景曝光的？",
        "assistant": "对于大量的问题和广泛的主题，回答每个问题都是非常耗时的。这样的问题列表看起来像是为了开发或学习虚幻引擎(Unreal Engine)渲染技术的目的而准备的。为了提供一些有用的信息，我将试着总结出关键的回答，这样可以涵盖大部分问到的主题。\n\n**虚幻引擎渲染管线概述：**\n虚幻引擎的渲染管线负责将3D场景转换为平面图像。主要步骤包括场景几何体的提取、光照和阴影的计算、材质的应用、以及最终的图像后处理。\n\n**创建和编辑材质：**\n材质是定义对象表面外观，如颜色、纹理和光泽等的属性。在虚幻引擎中，你可以使用材质编辑器来创建和编辑材质，它提供了一个可视化的节点网络来调整材质属性。\n\n**Post-Processing效果：**\n后期处理效果涉及到在3D渲染后对图像进行的处理，这包括颜色校正、布鲁光(Bloom)、景深(Depth of Field)、HDR曝光、镜面折射和反射等效果。\n\n**虚幻引擎粒子系统：**\n虚幻引擎提供了强大的Niagara和Cascade粒子系统，用于创建如火、烟、雾、尘埃等效果。这可以通过蓝图或材质与粒子参数交互进行增强。\n\n**光线追踪技术：**\n虚幻引擎支持实时光线追踪，它提供了更逼真的光影效果，像几乎真实的反射、阴影、折射和全局光照(Global Illumination, GI)。\n\n**阴影技术：**\n虚幻引擎支持多种阴影技术，包括静态阴影贴图、动态阴影和软阴影。这些技术考虑了不同光源和物体的特性来生成逼真的阴影。\n\n**全局光照解决方案：**\n全局光照是指光在场景中的多次散射。虚幻引擎提供了静态的光照贴图以及动态GI解决方案，如LPV(Light Propagation Volumes)。\n\n**图像空间光线追踪 (ISRT) 和 GPU粒子系统：**\nISRT允许在图像空间来模拟更复杂的光影效果。GPU粒子系统利用了图形处理器的强大计算能力，可以实现大量粒子实时模拟。\n\n**抗锯齿技术：**\n虚幻引擎支持多种抗锯齿技术，包括传统的MSAA、更现代的技术如FXAA、TXAA和MLAA等。\n\n**渲染优化技术：**\n为了提高性能，虚幻引擎实现了多种优化技术，例如LOD系统（Level of Detail，细节层次）、剔除（Culling，移除视野外的物体）、纹理压缩和流式加载等。\n\n**动态天气系统和环境效果：**\n动态天气系统可以通过改变光照、粒子系统（如下雨或下雪），以及天空盒的动态变化来实现。环境效果则可以通过材料更改（如湿地效果）和PBR材料的逼真性来提升。"
     },
     {
        "human": "如何在虚幻引擎中创建动态的火焰和爆炸效果？",
        "assistant": "创建和编辑材质的过程依赖于虚幻引擎的材质编辑器。这是一个非常直观的界面，它允许用户通过材质图（Material Graph）来创建和编辑材质。在这个图中，材质的各个部分是通过节点表示的。每个节点代表了一种材质属性，比如颜色、纹理、透明度、高光等，这些节点可以通过线缆相连，以定义材质的最终外观。\n\n以下是创建和编辑材质的基本步骤：\n\n1. 创建新材质：\n   - 在内容浏览器中右键单击，选择“材质”选项。\n   - 这将创建一个新的材质资产，并在材质编辑器中打开它。\n\n2. 编辑材质属性：\n   - 使用材质编辑器左侧的节点面板来添加各种节点到材质图中。\n   - 您可以添加纹理采样器节点来使用贴图，常量节点来定义颜色或数值，以及各种材质函数节点来实现更复杂的效果。\n\n3. 连接节点：\n   - 节点之间的连接定义了材质的运算逻辑。拖拽节点之间的针脚来连接它们。\n   - 您需要将结果连接到材质的输出节点，这些输出定义了材质在光照、颜色、金属度、粗糙度等方面的表现。\n\n4. 参数化材质：\n   - 通过添加材质参数，比如“参数化纹理”、“参数变量”等，您可以创建可以在蓝图中或在材质实例中动态调整的材质。\n   - 参数化让您可以重用同一个材质，通过更改参数来实现不同的外观，这非常有用。\n\n5. 预览和调整：\n   - 您可以实时预览材质在材质编辑器中的球体或立方体预览上的效果。\n   - 根据预览进行实时调整，直到您满意为止。\n\n6. 保存并应用：\n   - 一旦完成材质的编辑，点击“保存”按钮来保存您的工作。\n   - 您可以将此材质拖动到场景中的对象上，或者在静态网格的材质槽中指定它。\n\n请记住，材质制作是一个迭代过程，可能需要多次调整和预览以达到理想的效果。虚幻引擎的材质编辑器支持PBR（基于物理的渲染）工作流，使得创建的材质可以更逼真地模拟真实世界中的物体表面。"
     },
     {
        "human": "虚幻引擎中的LOD系统如何影响渲染性能？",
        "assistant": "Unreal Engine（虚幻引擎）提供了一系列功能来优化渲染渲染性能，其中LOD系统（Level Of Detail，详细等级）是很重要的一部分。LOD系统是通过为在不同距离上观察的对象提供不同的细节层次，从而优化渲染性能。\n\nLOD 系统如何影响渲染性能：\n\n1. **模型复杂度降低**：当物体距离摄像机较远时，渲染器会选择使用更低细节的模型。这些模型通常拥有较少的顶点和面片，从而减少了GPU的负担。\n\n2. **渲染调用减少**：如果多个远处物体使用相同的LOD层级，可以将它们的绘制调用合并为单次调用，从而降低CPU负担。\n\n3. **纹理贴图和材质复杂度降低**：与模型类似，远处物体也可以使用更低分辨率的纹理和简化的材质，这进一步降低了显存的使用量和纹理采样的性能消耗。\n\n4. **影子及反射代理**：面向远距离物体时，可以采用更低分辨率的影子贴图（Shadow Maps）和反射代理（Reflection Probes），从而达到性能节省的目的。\n\n5. **发卡负载均衡**：通过根据摄像机的视角和距离自动调整模型的细节级别，LOD系统可以在不牺牲太多视觉效果的情况下对发卡负载进行均衡。\n\n6. **流畅的视觉体验**：设置不同LOD阈值可以在性能和视觉质量之间取得平衡。当玩家在游戏中移动时，通过平滑的转换来确保不会有突变的视觉变化。\n\n为了最大化渲染的性能，通常需要对物体进行LOD的设置，确保在视觉效果可接受的前提下最小化性能的消耗。Unreal Engine 提供了自动和手动创建LOD的工具，开发者可以根据项目的需要来设定不同级别的LOD，以获得最佳的性能和视觉效果。"
     }
    ]
  }
```




## Training process

<img src="img/444.png" width="450"> 


Currently, full parameter command fine-tuning and QLoRA command fine-tuning are supported. We extract various components used in training for subsequent expansion and optimization. For details, see the implementation in the component directory. Parameter configuration during training is stored in the train_args directory to facilitate unified management and changes. You can view the training configurations of different models in the train_args directory.

### Data formats
During training, we splice multiple rounds of dialogue into the following format and then tokenize. In this process, <s\>represents bos_token，</s\>represents eos_token。
```
<s>input1</s>target1</s>input2</s>target2</s>...
```

When calculating loss, we use mask. The loss in the input part does not participate in parameter update. Only the loss in the "target" part participates in parameter update. This method makes full use of the advantages of parallel computing of the model, making the training more efficient, and each target part in the multi-round dialogue participates in the training, making the training more complete. Otherwise, it is necessary to split an n-round conversation into n pieces of data, and only calculate the loss of the last target, which greatly reduces the training efficiency.


### Full parameter fine-tuning
💻 Execute the following command to fine-tune all parameters:
```bash
deepspeed --num_gpus={num_gpus} train.py --train_args_file train_args/sft.json
```

📝 train_args/sft.json. The main parameters are described as follows. The following parameters can be modified according to needs. It is recommended not to modify other parameters:

- output_dir：Training output directory，store checkpoint、tokenizer、tensorboard
- model_name_or_path：The local directory of the pretrained model, or the model name on huggingface.
- train_file：Training data set path. You can use data/dummy_data.jsonl for debugging.
- num_train_epochs：Training rounds. If the amount of data is large enough, it is generally recommended to train for only one epoch.
- per_device_train_batch_size：The batch size of each graphics card.
- gradient_accumulation_steps：Gradient cumulative steps. global batch=num_gpus * per_device_train_batch_size * gradient_accumulation_steps。
- gradient_checkpointing：If the memory is tight, you can turn it on. Trading time for space, the model does not cache activation status and performs two forward calculations to save memory.
- learning_rate：learning rate. When fine-tuning all parameters, it is recommended to be smaller, 1e-5 or 5e-6.
- max_seq_length：Maximum length during training. Set it according to your own device. The longer it is, the more video memory it will take up.
- logging_steps：Train loss is counted every few steps.
- save_steps：How many steps to save a model.
- save_total_limit：The maximum number of checkpoints can be saved in the output_dir directory. If the checkpoint is exceeded, the oldest one will be deleted.
- lr_scheduler_type：Learning rate change strategy.
- warmup_steps：Warm up steps. How many steps does the learning rate take to increase to the specified value.
- optim：Optimizer. If it is full parameter fine-tuning, it is recommended to use adamw_hf.
- seed：Random seeds are used to reproduce experimental results.
- fp16：Use fp16 mixed precision. V100 is recommended to be turned on.
- bf16：Use bf16 mixed precision. A100 is recommended to be turned on.


<img src="img/Zelda.gif" width="450"> 

### QLoRA fine-tuning

For a detailed introduction to QLoRA, please refer to the article:[【QLoRA实战】使用单卡高效微调bloom-7b1，效果惊艳](https://mp.weixin.qq.com/s/DED7yeiE0DibsVzTmMeDOw)

QLoRA uses 4-bit nf4 quantization and adds more adapters to greatly reduce memory consumption while approaching the effect of full parameter fine-tuning as much as possible.
The QLoRA paper points out that this method can fine-tune a 33B model on a V100, and the performance is close to full parameter fine-tuning.

We use qlora on bloom-7b1. The number of parameters of the adapter is about 120 million, which exceeds the number of parameters of the bert-base model. It can be trained on V100 with a length of 1024.

💻 When using a single card, it is recommended to use this python command to start the script:
```bash
python train_qlora.py --train_args_file train_args/qlora/baichuan-7b-sft-qlora.json
```

💻 When using multiple cards, use the torchrun command to start the script:
```bash
torchrun --nproc_per_node={num_gpus} train_qlora.py --train_args_file train_args/qlora/baichuan-7b-sft-qlora.json
```

📝 The main parameters in train_args/sft-qlora.json are described as follows, which are basically the same as the parameters for full fine-tuning, with a few special ones:
- lora_rank：The rank of the qlora matrix. Generally set to 8, 16, 32, 64, etc., the author set it to 64 in the qlora paper. The larger the value, the greater the number of parameters involved in training. Generally speaking, the effect will be better, but more video memory is required.
- lora_alpha: Scaling parameters in qlora. Generally, it can be set to 16 or 32.
- lora_dropout: The dropout rate of lora weight.
- learning_rate：The learning rate setting in qlora is larger, generally 1e-4, 2e-4.

<img src="img/555.png" width="450"> 

## Model usage

### weight merging

If you use LoRA or QLoRA for training, this project only saves the weights and configuration files of the adapter, and you need to merge the adapter weights with the base model. For the script, see script/merge_lora.py

### Model reasoning
We provide scripts for single-round dialogue and multi-round dialogue. Please see the script/chat directory for details. This script is compatible with all models trained in this project for inference and is not suitable for models not trained in this project.
```bash
cd script/chat
python single_chat.py
```

The `top_p, temperature, repetition_penalty, do_sample` and other parameters in the generation script have a great impact on the generation effect of the model, and can be debugged and modified according to your own usage scenarios.

The inference script supports the use of base model and adapter for inference. The disadvantage is that each time the script is started, the weights need to be merged, which takes a long time.

Supports the use of 4bit for inference, low memory requirements, and the effect will be slightly reduced.

### Service deployment
This project supports deploying the model as an HTTP service. The script is under script/http and developed using flask. start_service.py is to start the service, and post is to send the request, which can be modified as needed.


## Generate effects

The following examples are generated by the UEGPT-InternLM2-20b model and are not modified and are for reference only.

<img src="img/fortnite.gif" width="450"> 


<details><summary><b>Unreal Engine Basis</b></summary>
<img src="img/UE.png" width="450"> 
</details>


</details>
<details><summary><b>Nanite Virtual Geometry</b></summary>
<img src="img/nanite.png" width="450"> 



</details>

<details><summary><b>Lumen illumination</b></summary>
<img src="img/lumen.png" width="450"> 


</details>

<details><summary><b>Physics Chaos</b></summary>
<img src="img/Physics.png" width="450"> 


</details>


<details><summary><b>Landscape Solutions</b></summary>
<img src="img/Landscape.png" width="450"> 

</details>


<details><summary><b>Toolchains</b></summary>
<img src="img/python.png" width="450"> 
</details>


## Large Languages Models with Unreal Engine 

😎Stay tune!

<img src="img/chatwithtexture.gif" width="450"> 

## Installation in UE

### Setup ComfyUI

1. Install [ComfyUI](https://github.com/comfyanonymous/ComfyUI) by following the [official installation instructions](https://github.com/comfyanonymous/ComfyUI?tab=readme-ov-file#installing) for your OS.

2. Download **all** of the required models from the links below and place them in the corresponding ComfyUI `models` sub-directory from the list.

The models directory is relative to the ComfyUI root directory i.e. `<ComfyUI Root>/ComfyUI/models/`.

- `models/checkpoints/sd_xl_base_1.0_0.9vae.safetensors` - [Download](https://huggingface.co/stabilityai/stable-diffusion-xl-base-1.0/blob/main/sd_xl_base_1.0_0.9vae.safetensors)
- `models/checkpoints/sd_xl_refiner_1.0_0.9vae.safetensors` - [Download](https://huggingface.co/stabilityai/stable-diffusion-xl-refiner-1.0/blob/main/sd_xl_refiner_1.0_0.9vae.safetensors)
- `models/controlnet/diffusers_xl_canny_full.safetensors` - [Download](https://huggingface.co/lllyasviel/sd_control_collection/blob/main/diffusers_xl_canny_full.safetensors)
- `models/controlnet/diffusers_xl_depth_full.safetensors` - [Download](https://huggingface.co/lllyasviel/sd_control_collection/blob/main/diffusers_xl_depth_full.safetensors)
- `models/loras/lcm_lora_sdxl.safetensors` - [Download](https://huggingface.co/latent-consistency/lcm-lora-sdxl/blob/main/pytorch_lora_weights.safetensors) (Note: Rename the file to `lcm_lora_sdxl.safetensors`)
- `models/upscale_models/4x-UltraSharp.pth` - [Download](https://huggingface.co/lokCX/4x-Ultrasharp/blob/main/4x-UltraSharp.pth)

### Setup Unreal Engine project

1. Clone this repository.

2. Build the Unreal project by right clicking on `MyProject.uproject` and selecting `Generate Visual Studio project files`.

    This will generate a `MyProject.sln` file in the project directory. Open the file in Visual Studio and compile the project by selecting `Build -> Build Solution` in the top menu. If you are encountering errors, make sure Visual Studio is correctly configured for Unreal Engine by following [this guide](https://docs.unrealengine.com/5.3/en-US/setting-up-visual-studio-development-environment-for-cplusplus-projects-in-unreal-engine/).

3. Open the project in the Unreal Engine editor.

4. Configure the plugin by going to `Project Settings -> Plugins -> Chat With Textures`.

    If you are running ComfyUI on a remote machine, you need to set the `Comfy Url` to the correct address.

5. Open the plugin window by clicking on `Tools -> Editor Utility Widgets -> Chat With Texture`.

    If the menu item is missing you need to open the `Chat With Texture` from the Content Browser in `Plugins/Chat With Textures Content/` and click `Run Utility Widget` in the blueprint editor.

   If you don't see the Plugin folder in the Content Browser then click the `Settings` button on the top right of the Content Browser and make sure the `Show Plugin Contents` checkbox is enabled in the menu.


# Usage

Make sure ComfyUI is up and running before proceeding.

1. Select the actors you want to texture in the Outliner.

2. Set your desired settings in the Chat With Texture widget.

3. Click `Render` to start the rendering process.

Notes:
- Your meshes must have UVs (autogenerated UVs are fine).
- The plugin will automatically create a new material instance and texture for each selected actor.

## Modes

### Create

This mode uses a fast SDXL LCM model to create a low-resolution texture for each selected actor. Use this to quickly prototype and iterate on your scene.

### Refine

This mode uses a slower SDXL workflow to refine the low-resolution textures created in the `Create` mode. Use this to create the final high-resolution textures for your scene.

### Edit

This mode allows you to edit the textures created in the `Create` or `Refine` mode by using an inpainting workflow. Use this mode to fix any artifacts or errors in the textures.

You can select from two edit modes - `From Texture` and `From Object`. `From Texture` allows you to do precise edits by painting undesired areas to magenta (255, 0, 255, 255) using Mesh Paint. `From Object` will inpaint all selected actors.

## Editing the ComfyUI Workflows

You can find the ComfyUI workflows used by the plugin in the `Plugins/Chat With Textures/Content/Workflows/Original` folder. Load the JSONs into ComfyUI to see the full workflow and make changes. After making changes, save the workflow using the `Save (API Format)` button in ComfyUI and copy the JSON to the corresponding file in the `Plugins/Chat With Textures/Content/Workflows` folder.

You need to have `Enable Dev mode Options` enabled in the ComfyUI settings to see the `Save (API Format)` button.