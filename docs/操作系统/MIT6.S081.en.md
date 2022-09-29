# MIT 6.S081: Operating System Engineering

## Descriptions

- Offered by: MIT
- Prerequistites：Computer Architecture + Solid C Programming Skills + RISC-V Assembly
- Programming Languages：C, RISC-V
- Difficulty：🌟🌟🌟🌟🌟
- Class Hour：150 hours

麻省理工学院大名鼎鼎的 PDOS 实验室开设的面向MIT本科生的操作系统课程。开设这门课的教授之一 —— Robert Morris 教授曾是一位顶尖黑客，世界上第一个蠕虫病毒 Morris 就是出自他之手。

This Operating System course is offered by the well-known PDOS Group in MIT, to MIT undergraduates. One of the professors teaching this course, Robert Morris, was once a top-level hacker. He created 'Morris', the world's first worm virus.


这门课的前身是 MIT 著名的课程 6.828，MIT 的几位教授为了这门课曾专门开发了一个基于 x86 的教学用操作系统 JOS，被众多名校作为自己的操统课程实验。但随着 RISC-V 的横空出世，这几位教授又基于 RISC-V 开发了一个新的教学用操作系统 xv6，并开设了 MIT6.S081 这门课。由于 RISC-V 轻便易学的特点，学生不需要像此前 JOS 一样纠结于众多 x86 “特有的”为了兼容而遗留下来的复杂机制，而可以专注于操作系统层面的开发。
The predecessor of this course was the famous MIT 6.828. A couple of MIT professors have created an operating system called JOS based on x86 for this course, which has been used by many other famous universities for their own OS course labs. While after the the birth of RISC-V, these professors have developed a new operating system called xv6 for teaching based on RISC-V, and further opened MIT 6.S081. RISC-V is lightweight and beginner friendly, so students don't need to struggle with the 'characteristic' x86 features left by historical reasons as in JOS, but focus on the development on pure operating system level. 


这几位教授还专门写了一本[教程](https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf)，详细讲解了 xv6 的设计思想和实现细节。
These professors have also written a [tutorial](https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf), elaborately explaining the ideas of design and details of implementation of xv6 operating system. 

这门课的讲授也很有意思，老师会带着学生依照 xv6 的源代码去理解操作系统的众多机制和设计细节，而不是停留于理论知识。每周都会有一个 lab，让你在 xv6 上增加一些新的机制和特性，非常注重学生动手能力的培养。整个学期一共有 11 个 lab，让你全方位地深刻理解操作系统的每个部分，非常有成就感。而且所有的lab都有着非常完善的测试框架，有的测试代码甚至上千行，让人不得不佩服 MIT 的几位教授为了教好这门课所付出的心血。
The teaching style of this course is also interesting, professors guided the students to understand the numerous features and design details in operating system by going through xv6 source code, instead of merely teaching theoretical knowledge. Labs that come weekly will make you adding new features and properties to xv6, which focuses on enhancing students' practical skills. There are 11 labs in total in the whole semester for you to understand each aspects of operating system design, which is brings great sense of achievement. Each lab has a complete framework for testing, some testing codes are more than a thousand lines, which shows how many effort these MIT professors have put to each this course well. 

这门课的后半程会讲授操作系统领域的多篇经典论文，涉及文件系统、系统安全、网络、虚拟化等等多个主题，让你有机会接触到学界最前沿的研究方向。
In later half of the course, a couple of classical papers in operating system field will be taught, related to file systems, system security, networking, virtualization and so on, giving you a chance to have a taste of the cutting edge research directions in academic field.

## Course Resources

- Course Website: <https://pdos.csail.mit.edu/6.828/2021/schedule.html>
- Lecture Videos：<https://www.youtube.com/watch?v=L6YqHxYHa7A>, videos for each lecture can be found on the course website.
- Translated documentation(Chinese) of Lecture videos: <https://mit-public-courses-cn-translatio.gitbook.io/mit6-s081/>
- Text Book: <https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf>
- Assignments: <https://pdos.csail.mit.edu/6.828/2021/schedule.html>, 11 labs, can be found on the course website.

## xv6 Resources

- [Detailed Explanation of xv6](https://space.bilibili.com/1040264970/)
- [xv6 Documentation(Chinese)](https://th0ar.gitbooks.io/xv6-chinese/content/index.html)

## Complementary Resources

All resources used and assignments implemented by @PKUFlyingPig when learning this course are in [PKUFlyingPig/MIT6.S081-2020fall - GitHub][github_pkuflyingpig].

@[KuangjuX] documented MIT 6.S081 labs' [Solutions][solution_kuangjux]，with detailed solutions and complementary knowledge. Moreover, @[KuangjuX] has reimplemented the xv6-riscv operating system with Rust: [xv6-rust], it contains more detailed review and discussion about xv6-riscv, please view the details if you are interested. 

[github_pkuflyingpig]: https://github.com/PKUFlyingPig/MIT6.S081-2020fall
[KuangjuX]: https://github.com/KuangjuX
[solution_kuangjux]: https://github.com/KuangjuX/xv6-riscv-solution
[xv6-rust]: https://github.com/Ko-oK-OS/xv6-rust

### Some Blogs for References

- [doraemonzzz](http://doraemonzzz.com/tags/6-S081/)
- [Xiao Fan (樊潇)](https://fanxiao.tech/posts/MIT-6S081-notes/)
- [Miigon's blog](https://blog.miigon.net/categories/mit6-s081/)
- [Zhou Fang](https://walkerzf.github.io/categories/6-S081/index.html)
- [Yichun's Blog](https://www.yichuny.page/tags/Operating%20System)
- [解析Ta](https://blog.csdn.net/u013577996/article/details/108679997)
- [PKUFlyingPig](https://github.com/PKUFlyingPig/MIT6.S081-2020fall)
- [星遥见](https://www.cnblogs.com/weijunji/tag/XV6/)
