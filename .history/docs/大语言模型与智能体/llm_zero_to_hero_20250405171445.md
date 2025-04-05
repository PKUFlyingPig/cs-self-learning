# Andrej Karpathy的LLM从零到精通系列课程

## 课程概览

- **先修要求**：
- **编程语言**：Python
- **难度等级**：🌟
- **预计学习时长**：50小时

## 课程资源

- **课程视频**：[YouTube频道](https://www.youtube.com/@AndrejKarpathy)
- **GitHub代码库**：
  - [nanoGPT](https://github.com/karpathy/nanoGPT)
  - [llm.c](https://github.com/karpathy/llm.c)

## 核心课程系列

### 1. LLM基础讲座

#### [Intro to Large Language Models](https://www.youtube.com/watch?v=zjkBMFhNj_g)

- **核心内容**：
  - LLM定义与组成结构
  - 训练流程（数据需求、计算资源）
  - 模型能力与局限性
  - 安全性挑战（越狱攻击、提示词注入）

#### [Deep Dive into LLMs like ChatGPT](https://www.youtube.com/watch?v=7xTGNNLPyMI)

- **核心内容**：
  - 预训练阶段（数据收集、分词处理）
  - 神经网络架构
  - 推理过程
  - 强化学习微调

#### [How I use LLMs](https://www.youtube.com/watch?v=EWvNQjAaOHw)

- **实际应用**：
  - 写作与编程辅助
  - 多模态交互
  - 自定义指令与记忆功能
  - 不同LLM的对比分析

### 2. 神经网络：从零开始

#### 基础构建

- **Micrograd**: [2h25m] [Introduction to neural networks and backpropagation](https://www.youtube.com/watch?v=VMj-3S1tku0&t=1s)
- **[Makemore Series](https://www.youtube.com/watch?v=PaCmpygFfXo&list=PLAqhIrjkxbuWI23v9cThsA9GvCAUhRvKZ&index=2)**:
  - [1小时57分] 字符级语言建模
  - [1小时15分] 多层感知机实现
  - [1小时55分] 激活函数、梯度与批归一化
  - [1小时55分] 高级反向传播技巧
  - [56分钟] WaveNet架构实现

#### GPT实现

- **[手把手实现GPT](https://www.youtube.com/watch?v=kCc8FmEb1nY)**：
  - Transformer架构实现
  - 注意力机制详解
  - 训练过程演示

- **[复现GPT-2](https://www.youtube.com/watch?v=l8pRSuU81PU)**：
  - 完整1.24亿参数实现
  - 训练优化技巧
  - 超参数配置
  - 结果分析

### 3. 分词器

#### [构建GPT分词器](https://www.youtube.com/watch?v=zduSFxRajkE)

- 字节对编码实现
- 分词器训练流程
- 常见分词问题
- 对模型行为的影响