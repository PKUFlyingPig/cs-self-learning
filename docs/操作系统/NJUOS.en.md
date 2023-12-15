# NJU OS: Operating System Design and Implementation

## Course Introduction

- **University**: Nanjing University
- **Prerequisites**: Computer Architecture + Solid C programming skills
- **Programming Language**: C
- **Course Difficulty**: 🌟🌟🌟🌟
- **Estimated Study Time**: 150 hours

I had always heard that the operating system course taught by Professor Yanyan Jiang at Nanjing University was excellent. This semester, I had the opportunity to watch his lectures on Bilibili and gained a lot. As a young professor with rich coding experience, his teaching is full of a hacker's spirit. Often in class, he would start coding in the command line on a whim, and many important points were illustrated with vivid and straightforward code examples. What struck me most was when he implemented a mini executable file and a series of binary tools to help students better understand the design philosophy of dynamic link libraries, solving many problems that had puzzled me for years.

In the course, Prof. Jiang starts from the perspective that "programs are state machines" to establish an explainable model for the "root of all evil" concurrent programs. Based on this, he discusses common methods of concurrency control and strategies for dealing with concurrency bugs. Then, he views the operating system as a series of objects (processes/threads, address spaces, files, devices, etc.) and their APIs (system calls), combined with rich practical examples to show how operating systems use these objects to virtualize hardware resources and provide various services to application software. In the final part about persistence, he builds up various storage devices from 1-bit storage media and abstracts a set of interfaces through device drivers to facilitate the design and implementation of file systems. Although I have taken many operating system courses before, this unique approach has given me many unique perspectives on system software.

In addition to its innovative theoretical instruction, the course's emphasis on practice is a key feature of Prof. Jiang's teaching. In class and through programming assignments, he subtly cultivates the ability to read source code and consult manuals, which are essential skills for computer professionals. During the fifth MiniLab, I read Microsoft's FAT file system manual in detail for the first time, gaining a very valuable experience.

The programming assignments consist of 5 MiniLabs and 4 OSLabs. Unfortunately, the grading system is only open to students at Nanjing University. However, Professor Jiang generously allowed me to participate after I emailed him. I completed the 5 MiniLabs, and the overall experience was excellent. Particularly, the second coroutine experiment left a deep impression on me, where I experienced the beauty and "terror" of context switching in a small experiment of less than a hundred lines. Also, the MiniLabs can be easily tested locally, so the lack of a grading system should not hinder self-learning. Therefore, I hope others will not collectively "harass" the professor for access.

Finally, I want to thank Professor Jiang again for designing and offering such an excellent operating system course, the first independently developed computer course from a domestic university included in this book. It's thanks to young, new-generation teachers like Professor Jiang, who teach with passion despite the heavy Tenure track evaluation, that many students have an unforgettable undergraduate experience. I also look forward to more such high-quality courses in China, which I will include in this book for the benefit of more people.

## Course Resources

- Course Website: <https://jyywiki.cn/OS/2022/index.html>
- Course Videos: <https://space.bilibili.com/202224425/channel/collectiondetail?sid=192498>
- Course Textbook: <http://pages.cs.wisc.edu/~remzi/OSTEP/>
- Course Assignments: <https://jyywiki.cn/OS/2022/index.html>

## Resource Summary

As per Professor Jiang's request, my assignment implementations are not open-sourced.