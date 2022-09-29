# MIT 6.S081: Operating System Engineering

## Descriptions

- Offered by: MIT
- Prerequisites: Computer Architecture + Solid C Programming Skills + RISC-V Assembly
- Programming Languages: C, RISC-V
- Difficulty：🌟🌟🌟🌟🌟
- Class Hour：150 hours

This Operating System course is offered by the well-known PDOS Group in MIT, to MIT undergraduates. One of the professors teaching this course, Robert Morris, was once a top-level hacker. He created 'Morris', the world's first worm virus.

The predecessor of this course was the famous MIT 6.828. A couple of MIT professors have created an operating system called JOS based on x86 for this course, which has been used by many other famous universities for their OS course labs. While after the birth of RISC-V, these professors developed a new operating system called xv6 for teaching based on RISC-V, and further opened MIT 6.S081. RISC-V is lightweight and beginner friendly, so students don't need to struggle with the 'characteristic' x86 features left by historical reasons as in JOS, but focus on the development at the pure operating system level. 

The course professors have also written a [tutorial](https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf), elaborately explaining the ideas of design and details of the implementation of xv6 operating system. 

The teaching style of this course is also interesting, professors guided the students to understand the numerous features and design details in the operating system by going through xv6 source code, instead of merely teaching theoretical knowledge. Labs that come weekly will make you add new features and properties to xv6, which focuses on enhancing students' practical skills. There are 11 labs in total in the whole semester for you to understand each aspect of operating system design, which brings a great sense of achievement. Each lab has a complete framework for testing, some testing codes are more than a thousand lines, which shows how much effort these MIT professors have made to teach this course well. 

In the later half of the course, a couple of classical papers in the operating system field will be taught, related to file systems, system security, networking, virtualization, and so on, giving you a chance to have a taste of the cutting edge research directions in the academic field.

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

@[KuangjuX] documented MIT 6.S081 labs' [Solutions][solution_kuangjux], with detailed solutions and complementary knowledge. Moreover, @[KuangjuX] has reimplemented the xv6-riscv operating system with Rust: [xv6-rust], it contains some more detailed reviews and discussions about xv6-riscv, please view the details if you are interested. 

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
