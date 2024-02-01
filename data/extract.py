import json

# 输入文件路径和输出文件路径
input_file_path = 'moss-003-sft-data.jsonl'
output_file_path = 'output.jsonl'

# 打开输入文件和输出文件
with open(input_file_path, 'r', encoding='utf-8') as input_file, open(output_file_path, 'w', encoding='utf-8') as output_file:
    # 读取前一万行
    for _ in range(500):
        line = input_file.readline()
        if not line:
            break  # 文件读取完毕或者不足一万行时退出循环
        output_file.write(line)

# 统计总行数
with open(input_file_path, 'r', encoding='utf-8') as input_file:
    total_lines = sum(1 for line in input_file)

print("前一万行已提取到", output_file_path)
print("JSONL 文件总共有", total_lines, "行")