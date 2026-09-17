# MIT 6.566 (原 6.858): Computer System Security

## 课程简介

- 所属大学：MIT
- 先修要求：计算机体系结构，对计算机系统有初步了解
- 编程语言：C, Python
- 课程难度：🌟🌟🌟🌟🌟
- 预计学时：150 小时

这门课自 2023 年春季学期起，课程编号由 6.858 变更为 6.5660，2024 年春季学期起进一步简化为 6.566，课程内容保持不变。

MIT 的计算机系统安全课程，实验环境是一个 Web Application Zoobar。学生学习攻防技术并应用于该 Web Application。

- Lab 1: you will explore the zoobar web application, and use buffer overflow attacks to break its security properties.
- Lab 2: you will improve the zoobar web application by using privilege separation, so that if one component is compromised, the adversary doesn't get control over the whole web application.
- Lab 3: you will build a program analysis tool based on symbolic execution to find bugs in Python code such as the zoobar web application.
- Lab 4: you will improve the zoobar application against browser attacks.

这个课我主要是做了 Lab 3。Lab 3 是通过混合符号执行来遍历程序的所有分支，理解了符号执行的思想后 Lab 并不难做。这个 Lab 直观展示符号执行这种技术的使用方法。

这个课的 Final Project 是实现 [SecFS](https://github.com/mit-pdos/secfs-skeleton)，一个远端文件系统，面对完全不可信的服务器，提供机密性和完整性。参考论文为 [SUNDR](https://www.usenix.org/legacy/event/osdi04/tech/full_papers/li_j/li_j.pdf)。

## 课程资源

- 课程网站：<https://css.csail.mit.edu/6.566/2026/>（最新一届；上方 Final Project 的描述对应 [2022 年春季版本](https://css.csail.mit.edu/6.858/2022/)）
- 课程视频：参见课程网站
- 课程教材：无
- 课程作业：4 个 Lab + Final Project / Lab5
