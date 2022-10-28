# MIT 6.S081: Operating System Engineering

## Descriptions

- Offered by: MIT
- Prerequisites: Computer Architecture + Solid C Programming Skills + RISC-V Assembly
- Programming Languages: C, RISC-V
- Difficulty: 🌟🌟🌟🌟🌟
- Class Hour: 150 hours

This is the undergraduate operating system course at MIT, offered by the well-known PDOS Group. One of the instructors, Robert Morris, was once a famous hacker who created 'Morris', the first worm virus in the world.

The predecessor of this course was the famous MIT6.828. The same instructors at MIT created an educational operating system called JOS based on x86, which has been adopted by many other famous universities. While after the birth of RISC-V, they implemented it based on RISC-V, and offered MIT 6.S081. RISC-V is lightweight and user-friendly, so students don't have to struggle with the confusing legacy features in x86 as in JOS, but focus on the operating system design and implementation. 

The instructors have also written a [tutorial](https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf), elaborately explaining the ideas of design and details of the implementation of xv6 operating system. 

The teaching style of this course is also interesting, the instructors guided the students to understand the numerous technical challenges and design principles in the operating systems by going through the xv6 source code, instead of merely teaching theoretical knowledge. Weekly Labs will let you add new features to xv6, which focus on enhancing students' practical skills. There are 11 labs in total during the whole semester which give you the chance to understand every aspect of the operating systems, bringing a great sense of achievement. Each lab has a complete framework for testing, some tests are more than a thousand lines of code, which shows how much effort the instructors have made to teach this course well.

In the second half of the course, the instructors will discuss a couple of classic papers in the operating system field, covering file systems, system security, networking, virtualization, and so on, giving you a chance to have a taste of the cutting edge research directions in the academic field.

## Course Resources

- Course Website: <https://pdos.csail.mit.edu/6.828/2021/schedule.html>
- Lecture Videos: <https://www.youtube.com/watch?v=L6YqHxYHa7A>, videos for each lecture can be found on the course website.
- Translated documentation(Chinese) of Lecture videos: <https://mit-public-courses-cn-translatio.gitbook.io/mit6-s081/>
- Text Book: <https://pdos.csail.mit.edu/6.828/2021/xv6/book-riscv-rev2.pdf>
- Assignments: <https://pdos.csail.mit.edu/6.828/2021/schedule.html>, 11 labs, can be found on the course website.

## xv6 Resources

- [Detailed Explanation of xv6](https://space.bilibili.com/1040264970/)
- [xv6 Documentation(Chinese)](https://th0ar.gitbooks.io/xv6-chinese/content/index.html)
- [line-by-line walk-through of key xv6 source codes](https://www.youtube.com/playlist?list=PLbtzT1TYeoMhTPzyTZboW_j7TPAnjv9XB)

## Complementary Resources

All resources used and assignments implemented by @PKUFlyingPig when learning this course are in [PKUFlyingPig/MIT6.S081-2020fall - GitHub][github_pkuflyingpig].

@[KuangjuX][KuangjuX] documented his [solutions][solution_kuangjux] with detailed explanations and complementary knowledge. Moreover, @[KuangjuX][KuangjuX] has reimplemented [the xv6 operating system in Rust][xv6-rust] which contains more detailed reviews and discussions about xv6.

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
