# MIT 6.S081: Operating System Engineering
## 课程简介
- 所属大学：麻省理工学院
- 先修要求：体系结构 + 扎实的C语言功底 + RISC-V汇编语言
- 编程语言：C，RISC-V
- 课程难度：🌟🌟🌟🌟🌟
- 预计学时：150小时

麻省理工学院大名鼎鼎的PDOS实验室开设的面向MIT本科生的操作系统课程。开设这门课的教授之一 —— Robert Morris教授曾是一位顶尖黑客，世界上第一个蠕虫病毒Morris就是出自他之手。

这门课的前身是MIT著名的课程6.828，MIT的几位教授为了这门课曾专门开发了一个基于X86的教学用操作系统JOS，被众多名校作为自己的操统课程实验。但随着RISC-V的横空出世，这几位教授又基于RISC-V开发了一个新的教学用操作系统xv6，并开设了MIT6.S081这门课。由于RISC-V轻便易学的特点，学生不需要像此前JOS一样纠结于众多X86“特有的”为了兼容而遗留下来的复杂机制，而
可以专注于操作系统层面的开发。

这几位教授还专门写了一本[教程](https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf)，详细讲解了xv6的设计思想和实现细节。

这门课的讲授也很有意思，老师会带着学生依照xv6的源代码去理解操作系统的众多机制和设计细节，而不是停留于理论知识。每周都会有一个lab，让你在xv6上增加一些新的机制和特性，非常注重学生动手能力的培养。整个学期一共有11个lab，让你全方位地深刻理解操作系统的每个部分，非常有成就感。而且所有的lab都有着非常完善的测试框架，有的测试代码甚至上千行，让人不得不佩服MIT的几位教授为了教好这门课所付出的心血。

这门课的后半程会讲授操作系统领域的多篇经典论文，涉及文件系统、系统安全、网络、虚拟化等等多个主题，让你有机会接触到学界
最前沿的研究方向。

## 课程资源
- [课程网站](https://pdos.csail.mit.edu/6.828/2021/schedule.html)
- [课程视频](https://www.youtube.com/watch?v=L6YqHxYHa7A)：每节课的链接详见课程网站
  - [课程视频翻译文档](https://mit-public-courses-cn-translatio.gitbook.io/mit6-s081/)
  - [xv6操作系统的深入讲解](https://space.bilibili.com/1040264970/)

- [课程教材](https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf)
  - [xv6中文文档](https://th0ar.gitbooks.io/xv6-chinese/content/index.html)

- [课程作业](https://pdos.csail.mit.edu/6.828/2021/schedule.html)：11个lab，具体要求详见课程网站

## 资源汇总
我在学习这门课中用到的所有资源和作业实现都汇总在[这个Github仓库](https://github.com/PKUFlyingPig/MIT6.S081-2020fall)中。此外也可以参考 [KuangjuX](https://github.com/KuangjuX) 实现的 MIT 6.S081 的几个 lab 的[题解](https://github.com/KuangjuX/xv6-riscv-solution)，里面亦有详细的解法和补充知识，另外，[KuangjuX](https://github.com/KuangjuX) 也使用 Rust 语言重新实现过 xv6-riscv 操作系统：[xv6-rust](https://github.com/Ko-oK-OS/xv6-rust)，里面对于 xv6-riscv 有更为详细的思考和讨论，感兴趣的同学可以看一下哦。

### 一些可以参考的博客
- [doraemonzzz](http://doraemonzzz.com/tags/6-S081/)
- [Xiao Fan (樊潇)](https://fanxiao.tech/posts/MIT-6S081-notes/)
- [Miigon's blog](https://blog.miigon.net/categories/mit6-s081/)
- [Zhou Fang](https://walkerzf.github.io/categories/6-S081/index.html)
- [Yichun's Blog](https://www.yichuny.page/tags/Operating%20System)
- [解析Ta](https://blog.csdn.net/u013577996/article/details/108679997)
- [PKUFlyingPig](https://github.com/PKUFlyingPig/MIT6.S081-2020fall)
- [星遥见](https://www.cnblogs.com/weijunji/tag/XV6/)
