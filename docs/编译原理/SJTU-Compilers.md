# SJTU 编译原理

## 课程简介

- 所属大学：上海交通大学
- 先修要求：计算机系统基础、数据结构与算法、编程基础
- 编程语言：C++
- 课程难度：🌟🌟🌟🌟
- 预计学时：150 小时

上海交通大学的编译原理课程旨在实现一个 Tiger 语言的编译器。在这门课上你可以学习到词法分析、文法分析、语义分析、逃逸分析、活动记录（栈帧）、LLVM IR、活跃分析、寄存器分配、垃圾收集、面向对象、函数式程序等众多话题。和北大的编译原理课程相似，该课程给予了你极大的自由度，测试程序只会对你输出的汇编代码的正确性进行测试，而不会对你编译器的具体设计做任何限制。你需要从一个个空文件中一步步构建出属于你自己的编译器。

在这门课上你将学到 `Flex`、`Bison`、`LLVM` 等框架的使用方法，并在练习过程中加强自己的调试能力。

理论部分由上海交通大学 IPADS 实验室的老师讲述。


## 课程资源


- 课程网站：<https://ipads.se.sjtu.edu.cn/courses/compilers>
- 课件：<https://ipads.se.sjtu.edu.cn/courses/compilers/Schedule.html>
- 框架代码：暂不开源，旧版本可以见 <https://gitee.com/east-china-normal-university_ttb_cs/tiger-compiler-25sp>，新版本可以邮件联系当届助教。
- 课程教材：虎书（Modern Compiler Implementation in C）<https://ipads.se.sjtu.edu.cn/courses/compilers/textbook/TigerBook-Chinese.pdf>
- 2 次 Quiz + 5 个必做 Lab + 2 个选做 Lab
    - Lab 1: Straight-line Program Interpreter
    - Lab 2: Lexer
    - Lab 3: Parser
    - Lab 4: Type Checking
    - Lab 5
        - Part 1: Escape Analysis
        - Part 2: Translate to LLVM
    - (Optional) Lab 6: Code Generation
    - (Optional) Lab 7: Register Allocation
