# conda create --name Zeldas  python=3.9
# conda activate Zelda
conda install pytorch==1.13.1 torchvision==0.14.1 torchaudio==0.13.1 pytorch-cuda=11.7 -c pytorch -c nvidia
pip install accelerate==0.21.0
pip install transformers==4.36
pip install peft==0.4.0
pip install bitsandbytes==0.39.0
pip install loguru==0.7.0
pip install numpy==1.21.4
pip install pandas==1.2.5
pip install tqdm==4.62.3
pip install deepspeed==0.9.5
pip install tensorboard
pip install sentencepiece
pip install transformers_stream_generator
pip install tiktoken
pip install einops
pip install httpx
pip install scipy
pip install mmengine
pip install xformers
pip install astunparse==1.6.2
CUDA_VISIBLE_DEVICES=0 torchrun --nproc_per_node=1 train_qlora.py --train_args_file train_args/sft/qlora/internlm-20b-sft-qlora.json
python script/merge_lora.py
cd script/chat
python multi_chat.py

