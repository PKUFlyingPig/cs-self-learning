## 课程简介
- 所属大学：MIT
- 先修要求:
- 编程语言：C, Python
- 课程难度：🌟🌟🌟🌟🌟
- 预计学时：150小时

MIT的计算机系统安全课程，实验环境是一个Web Application Zoobar. 学生学习攻防技术并应用于该Web Application. 

-   Lab 1: you will explore the zoobar web application, and use buffer overflow attacks to break its security properties.
-   Lab 2: you will improve the zoobar web application by using privilege separation, so that if one component is compromised, the adversary doesn't get control over the whole web application.
-   Lab 3: you will build a program analysis tool based on symbolic execution to find bugs in Python code such as the zoobar web application.
-   Lab 4: you will improve the zoobar application against browser attacks.

这个课我主要是做了lab3,  lab3是通过混合符号执行来遍历程序的所有分支.理解了符号执行的思想后lab并不难做.这个lab直观展示符号执行这种技术的使用方法. 

这个课的Final Project是实现一个SecFS,一个远端文件系统,面对完全不可信的服务器,提供机密性和完整性,[骨架代码](https://github.com/mit-pdos/secfs-skeleton),论文是[SUNDR](https://www.usenix.org/legacy/event/osdi04/tech/full_papers/li_j/li_j.pdf)
## 课程资源
- [课程网站](http://css.csail.mit.edu/6.858/2022/)
- 课程视频：参见课程网站
- 课程教材：无
- 课程作业：4个lab + Final Project / Lab5

## 资源汇总
