# 机器学习进阶

此路线图适用于已经学过了基础机器学习 (ML, NLP, CV, RL) 的同学 (高年级本科生或低年级研究生)，已经发表过至少一篇顶会论文 (NeurIPS, ICML, ICLR, ACL, EMNLP, NAACL, CVPR, ICCV) 想要走机器学习科研路线的选手。

此路线的目标是为读懂与发表机器学习顶会论文打下理论基础，特别是 Probabilistic Methods 这个 track 下的文章

机器学习进阶可能存在多种不同的学习路线，此路线只能代表作者 [Yao Fu](https://franxyao.github.io/) 所理解的最佳路径，侧重于贝叶斯学派下的概率建模方法，也会涉及到各项相关学科的交叉知识。

## 必读教材

- PRML: Pattern Recognition and Machine Learning. Christopher Bishop
  - 经典贝叶斯学派教材
- AoS: All of Statistics. Larry Wasserman
  - 经典频率学派教材

所以这两本书刚好相辅相成

## 字典

- MLAPP: Machine Learning: A Probabilistic Perspective. Kevin Murphy
- Convex Optimization. Stephen Boyd and Lieven Vandenberghe

## 进阶书籍

- W&J: Graphical Models, Exponential Families, and Variational Inference. Martin Wainwright and Michael Jordan
- Theory of Point Estimation. E. L. Lehmann and George Casella

## 如何阅读

### Guidelines

- 必读教材就是一定要读的教材
- 字典的意思是，一般情况下不管它，但当遇到了不懂的概念的时候，就去字典里面查（而不是维基百科）
- 进阶书籍先不读，先读完必读书籍。必读书籍一般都是要前前后后反复看过 N 遍才算读完
- 读的过程中，最重要的读法就是对比阅读 (contrastive-comparative reading)：同时打开两本书讲同一主题的章节，然后对比相同点和不同点和联系
- 读的过程中，尽量去回想之前读过的论文，比较论文和教材的相同点与不同点

### 基础路径

- 先读 AoS 第六章: Models, Statistical Inference and Learning，这一部分是最基础的科普
- 然后读 PRML 第 10, 11 章
  - 第 10 章的内容是 Variational Inference, 第 11 章的内容是 MCMC, 这两种方法是贝叶斯推断的两条最主要路线
  - 如果在读 PRML 的过程中发现有任何不懂的名词，就去翻前面的章节。很大概率能够在第 3，4 章找到相对应的定义；如果找不到或者不够详细，就去查 MLAPP
  - AoS 第 8 章 (Parametric Inference) 和第 11 章 (Bayesian Inference) 也可以作为参考。最好的方法是多本书对比阅读，流程如下
    - 假设我在读 PRML 第 10 章的时候发现了一个不懂的词：posterior inference
    - 于是我往前翻，翻到了第 3 章 (Linear Model for Regression)，看到了最简单的 posterior
    - 然后我接着翻 AoS，翻到了第 11 章，也有对 posterior 的描述
    - 然后我对比 PRML 第 10 章，第 3 章，AoS 第 11 章，三处不同地方对 posterior 的解读，比较其相同点和不同点和联系
- 读完 PRML 第 10 和 11 章之后，接着读 AoS 第 24 章 (Simulation Methods)，然后把它和 PRML 第 11 章对比阅读 -- 这俩都是讲 MCMC
- 如果到此处发现还有基础概念读不懂，就回到 PRML 第 3 章，把它和 AoS 第 11 章对比阅读
- Again，对比阅读非常重要，一定要把不同本书的类似内容同时摆在面前相互对比，这样可以显著增强记忆
- 然后读 PRML 第 13 章（跳过第 12 章），这一章可以和 MLAPP 的第 17, 18 章对比阅读
  - MLAPP 第 17 章是 PRML 第 13.2 章的详细版，主要讲 HMM
  - MLAPP 第 18 章是 PRML 第 13.3 章的详细版，主要讲 LDS
- 读完 PRML 第 13 章之后，再去读 PRML 第 8 章 (Graphical Models) -- 此时这部分应该会读得很轻松
- 以上的内容可以进一步对照 CMU 10-708 PGM 课程材料

到目前为止，应该能够掌握

- 概率模型的基础定义
- 精准推断 - Sum-Product
- 近似推断 - MCMC
- 近似推断 - VI

然后就可以去做更进阶的内容
