# NJU Software Analysis

## Descriptions

- Offered by: Nanjing University
- Prerequisite: Data Structures and Algorithms, familiar with at least one programming language
- Programming Languages: Java
- Difficulty: 🌟🌟🌟
- Learning Hours: 60 hours

Software Analysis is a course jointly offered by Yue Li and Tian Tan of Nanjing University. It mainly introduces program analysis, which refers to the theory and practice of static analysis. The idea of static analysis is to obtain **approximate** answers about specific properties of the program without running it. This course starts with the abstract syntax tree, control flow graph and intermediate representation, then introduces the theory and practice of data flow analysis and pointer analysis, and finally introduces several advanced topics, such as IFDS.

In my opinion, there are two reasons why this course is worth learning:

- Teaching. Program analysis is generally not easy to get started, but the two teachers are particularly meticulous in their lectures, and they will also guide you step by step through the process of an algorithm. Personally, I think that as long as you listen carefully in class, there is no problem that you can't understand.

- Assignments. The assignments are based on the Java program analysis framework Tai-e created by the teachers. The eight assignments cover a variety of static analysis techniques, including compiler optimization (liveness analysis, constant propagation, dead code detection), basic program analysis (program call graph construction, non/context-sensitive pointer analysis), and the application of program analysis in software security (taint analysis). The course also provides an online evaluation system available to **everyone**, which is suitable for self-study.

The assignments are mainly to implement the pseudo-code algorithms in class, so as to better help you understand the knowledge taught in class. I feel that the difficulty is not particularly high, especially suitable for completing the corresponding experiments after class to test your mastery of the knowledge taught in class. However, it is still challenging to pass all the test cases of each assignment.

## Resources

- Course Website: [Homepage](https://tai-e.pascal-lab.net/lectures.html)
- Course Video: [Bilibili](https://www.bilibili.com/video/BV1b7411K7P4/?spm_id_from=333.999.0.0&vd_source=b58da8cd0259ee873ef3dc2c9aa36d74)
- Course Textbook: None
- Course Assignments: [Homepage](https://tai-e.pascal-lab.net/intro/overview.html)
- OJ: [OJ](https://oj.pascal-lab.net/problem)
