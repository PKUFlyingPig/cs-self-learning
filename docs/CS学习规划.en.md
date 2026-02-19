# A Reference Guide for CS Learning

The field of computer science is vast and complex, with a seemingly endless sea of knowledge. Each specialized area can lead to limitless learning if pursued deeply. Therefore, a clear and definite study plan is very important. I've taken some detours in my years of self-study and finally distilled the following content for your reference.

Before you start learning, I highly recommend a popular science video series for beginners: [Crash Course: Computer Science](https://www.bilibili.com/video/BV1EW411u7th). In just 8 hours, it vividly and comprehensively covers various aspects of computer science: the history of computers, how computers operate, the important modules that make up a computer, key ideas in computer science, and so on. As its slogan says, *Computers are not magic!* I hope that after watching this video, everyone will have a holistic perception of computer science and embark on the detailed and in-depth learning content below with interest.

## Essential Tools

> As the saying goes: sharpening your axe will not delay your job of chopping wood. If you are a pure beginner in the world of computers, learning some tools will make you more efficient.

**Learn to ask questions**: You might be surprised that asking questions is the first one listed? I think in the open-source community, learning to ask questions is a very important ability. It involves two aspects. First, it indirectly cultivates your ability to solve problems independently, as the cycle of forming a question, describing it, getting answers from others, and then understanding the response is quite long. If you expect others to remotely assist you with every trivial issue, then the world of computers might not suit you. Second, if after trying, you still can't solve a problem, you can seek help from the open-source community. But at that point, how to concisely explain your situation and goal to others becomes particularly important. I recommend reading the article [How To Ask Questions The Smart Way](https://github.com/ryanhanwu/How-To-Ask-Questions-The-Smart-Way/blob/main/README-zh_CN.md), which not only increases the probability and efficiency of solving your problems but also keeps those who provide answers in the open-source community in a good mood.

**Learn to be a hacker**: [MIT-Missing-Semester](./编程入门/MIT-Missing-Semester.md) covers many useful tools for a hacker and provides detailed usage instructions. I strongly recommend beginners to study this course. However, one thing to note is that the course occasionally refers to terms related to the development process. Therefore, it is recommended to study it at least after completing an introductory computer science course.

**[GFW](./必学工具/翻墙.md)**: For well-known reasons, sites like Google and GitHub are not accessible in mainland China. However, in many cases, Google and StackOverflow can solve 99% of the problems encountered during development. Therefore, learning to use a VPN is almost an essential skill for a mainland CSer. (Considering legal issues, the methods provided in this book are only applicable to users with a Peking University email address).

**Command Line**: Proficiency in using the command line is often overlooked or considered difficult to master, but in reality, it greatly enhances your flexibility and productivity as an engineer. [The Art of Command Line](https://github.com/jlevy/the-art-of-command-line/blob/master/README-zh.md) is a classic tutorial that started as a question on Quora, but with the contribution of many experts, it has become a top GitHub project with over 100,000 stars, translated into dozens of languages. The tutorial is not long, and I highly recommend everyone to read it repeatedly and internalize it through practice. Also, mastering shell script programming should not be overlooked, and you can refer to this [tutorial](https://www.shellscript.sh/).

**IDE (Integrated Development Environment)**: Simply put, it's where you write your code. The importance of an IDE for a programmer goes without saying, but many IDEs are designed for large-scale projects and are quite bulky and overly feature-rich. Nowadays, some lightweight text editors with rich plugin ecosystems can basically meet the needs of daily lightweight programming. My personal favorites are VS Code and Sublime (the former has a very simple plugin configuration, while the latter is a bit more complex but aesthetically pleasing). Of course, for large projects, I would still use slightly heavier IDEs, such as Pycharm (Python), IDEA (Java), etc. (Disclaimer: all IDEs are the best in the world).

**[Vim](./必学工具/Vim.md)**: A command-line editor. Vim has a somewhat steep learning curve, but mastering it, I think, is very necessary because it will greatly improve your development efficiency. Most modern IDEs also support Vim plugins, allowing you to retain the coolness of a geek while enjoying a modern development environment.

**[Emacs](./必学工具/Emacs.md)**: A classic editor that stands alongside Vim, with equally high development efficiency and more powerful expandability. It can be configured as a lightweight editor or expanded into a custom IDE, and even more sophisticated tricks.

**[Git](./必学工具/Git.md)**: A version control tool for your project. Git, created by the father of Linux, Linus, is definitely one of the must-have tools for every CS student.

**[GitHub](./必学工具/GitHub.md)**: A code hosting platform based on Git. The world's largest open-source community and a gathering place for CS experts.

**[GNU Make](./必学工具/GNU_Make.md)**: An engineering build tool. Proficiency in GNU Make will help you develop a habit of modularizing your code and familiarize you with the compilation and linking processes of large projects.

**[CMake](./必学工具/CMake.md)**: A more powerful build tool than GNU Make, recommended for study after mastering GNU Make.

**[LaTex](./必学工具/LaTeX.md)**: <del>Pretentious</del> Paper typesetting tool.

**[Docker](./必学工具/Docker.md)**: A lighter-weight software packaging and deployment tool compared to virtual machines.

**[Practical Toolkit](./必学工具/tools.md)**: In addition to the tools mentioned above that are frequently used in development, I have also collected many practical and interesting free tools, such as download tools, design tools, learning websites, etc.

**[Thesis](./必学工具/thesis.md)**: Tutorial for writing graduation thesis in Word.

## Recommended Books

> I believe a good textbook should be people-oriented, rather than a display of technical jargon. It's certainly important to tell readers "what it is," but a better approach would be for the author to integrate decades of experience in the field into the book and narratively convey to the reader "why it is" and what should be done in the future.

[Link here](./好书推荐.md)

## Environment Setup

> What you think of as development — coding frantically in an IDE for hours.
>
> Actual development — setting up the environment for several days without starting to code.

### PC Environment Setup

If you are a Mac user, you're in luck, as this [guide](https://sourabhbajaj.com/mac-setup/) will walk you through setting up the entire development environment. If you are a Windows user, thanks to the efforts of the open-source community, you can enjoy a similar experience with [Scoop](./必学工具/Scoop.md).

Additionally, you can refer to an [environment setup guide][guide] inspired by [6.NULL MIT-Missing-Semester](./编程入门/MIT-Missing-Semester.md), focusing on terminal beautification. It also includes common software sources (such as GitHub, Anaconda, PyPI) for acceleration and replacement, as well as some IDE configuration and activation tutorials.

[guide]: https://taylover2016.github.io/%E6%96%B0%E6%9C%BA%E5%99%A8%E4%B8%8A%E6%89%8B%E6%8C%87%E5%8D%97%EF%BC%88%E6%96%B0%E6%89%8B%E5%90%91%EF%BC%89/index.html

### Server-Side Environment Setup

Server-side operation and maintenance require basic use of Linux (or other Unix-like systems) and fundamental concepts like processes, devices, networks, etc. Beginners can refer to the [Linux 101](https://101.lug.ustc.edu.cn/) online notes compiled by the Linux User Association of the University of Science and Technology of China. If you want to delve deeper into system operation and maintenance, you can refer to the [Aspects of System Administration](https://stevens.netmeister.org/615/) course.

Additionally, if you need to learn a specific concept or tool, I recommend a great GitHub project, [DevOps-Guide](https://github.com/Tikam02/DevOps-Guide), which covers a lot of foundational knowledge and tutorials in the administration field, such as Docker, Kubernetes, Linux, CI-CD, GitHub Actions, and more.

## Course Map

> As mentioned at the beginning of this chapter, this course map is merely a **reference guide** for course planning, from my perspective as an undergraduate nearing graduation. I am acutely aware that I neither have the right nor the capability to preach to others about “how one should learn”. Therefore, if you find any issues with the course categorization and selection below, I fully accept and deeply apologize for them. You can tailor your own course map in the next section [Customize Your Own Course Map](#yourmap).

Apart from courses labeled as *basic* or *introductory*, there is no explicit sequence in the following categories. As long as you meet the prerequisites for a course, you are free to choose any course according to your needs and interests.

### Mathematical Foundations

#### Calculus and Linear Algebra

As a freshman, mastering calculus and linear algebra is as important as learning to code. This point has been reiterated countless times by predecessors, but I feel compelled to emphasize it again: mastering calculus and linear algebra is really important! You might complain that these subjects are forgotten after exams, but I believe that indicates a lack of deep understanding of their essence. If you find the content taught in class to be obscure, consider referring to MIT’s [Calculus Course](./数学基础/MITmaths.md) and [18.06: Linear Algebra](./数学基础/MITLA.md) course notes. For me, they greatly deepened my understanding of the essence of calculus and linear algebra. Also, I highly recommend the maths YouTuber [**3Blue1Brown**](https://www.youtube.com/c/3blue1brown), whose channel features videos explaining the core of mathematics with vivid animations, offering both depth and breadth of high quality.

#### Introduction to Information Theory

For computer science students, gaining some foundational knowledge in information theory early on is beneficial. However, most information theory courses are targeted towards senior or even graduate students, making them quite inaccessible to beginners. MIT’s [6.050J: Information theory and Entropy](./数学基础/information.md) is tailored for freshmen, with almost no prerequisites, covering coding, compression, communication, information entropy, and more, which is very interesting.

### Advanced Mathematics

#### Discrete Mathematics and Probability Theory

Set theory, graph theory, and probability theory are essential tools for algorithm derivation and proof, as well as foundations for more advanced mathematical courses. However, the teaching of these subjects often falls into a rut of being overly theoretical and formalistic, turning classes into mere recitations of theorems and conclusions without helping students grasp the essence of these theories. If theory teaching can be interspersed with examples of algorithm application, students can expand their algorithm knowledge while appreciating the power and charm of theory.

[UCB CS70: Discrete Math and Probability Theory](./数学进阶/CS70.md) and [UCB CS126: Probability Theory](./数学进阶/CS126.md) are UC Berkeley’s probability courses. The former covers the basics of discrete mathematics and probability theory, while the latter delves into stochastic processes and more advanced theoretical content. Both emphasize the integration of theory and practice and feature abundant examples of algorithm application, with the latter including numerous Python programming assignments to apply probability theory to real-world problems.

#### Numerical Analysis

For computer science students, developing computational thinking is crucial. Modeling and discretizing real-world problems, and simulating and analyzing them on computers, are vital skills. Recently, the [Julia](https://julialang.org/) programming language, developed by MIT, has become popular in the field of numerical computation with its C-like speed and Python-friendly syntax. Many MIT mathematics courses have started using Julia as a teaching tool, presenting complex mathematical theories through clear and intuitive code.

[ComputationalThinking](https://computationalthinking.mit.edu/Spring21/) is an introductory course in computational thinking offered by MIT. All course materials are open source and accessible on the course website. Using the Julia programming language, the course covers image processing, social science and data science, and climatology modeling, helping students understand algorithms, mathematical modeling, data analysis, interactive design, and graph presentation. The course content, though not difficult, profoundly impressed me with the idea that the allure of science lies not in obscure theories or jargon but in presenting complex concepts through vivid examples and concise, deep language.

After completing this experience course, if you’re still eager for more, consider MIT’s [18.330: Introduction to Numerical Analysis](./数学进阶/numerical.md). This course also uses Julia for programming assignments but is more challenging and in-depth. It covers floating-point encoding, root finding, linear systems, differential equations, and more, with the main goal of using discrete computer representations to estimate and approximate continuous mathematical concepts. The course instructor has also written an accompanying open-source textbook, [Fundamentals of Numerical Computation](https://fncbook.github.io/fnc/frontmatter.html), which includes abundant Julia code examples and rigorous formula derivations.

If you’re still not satisfied, MIT’s graduate course in numerical analysis, [18.335: Introduction to Numerical Methods][18.335], is also available for reference.

[18.335]: https://ocw.mit.edu/courses/mathematics/18-335j-introduction-to-numerical-methods-spring-2019/index.htm

#### Differential Equations

Wouldn't it be cool if the motion and development of everything in the world could be described and depicted with equations? Although differential equations are not a mandatory part of any CS curriculum, I believe mastering them provides a new perspective to view the world.

Since differential equations often involve complex variable functions, you can refer to [MIT18.04: Complex Variables Functions][MIT18.04] course notes to fill in prerequisite knowledge.

[MIT18.04]: https://ocw.mit.edu/courses/mathematics/18-04-complex-variables-with-applications-spring-2018/

[MIT18.03: Differential Equations][MIT18.03] mainly covers the solution of ordinary differential equations, and on this basis, [MIT18.152: Partial Differential Equations][MIT18.152] dives into the modeling and solving of partial differential equations. With the powerful tool of differential equations, you will gain enhanced capabilities in modeling real-world problems and intuitively grasping the essence among various noisy variables.

[MIT18.03]: https://ocw.mit.edu/courses/mathematics/18-03sc-differential-equations-fall-2011/unit-i-first-order-differential-equations/
[MIT18.152]: https://ocw.mit.edu/courses/mathematics/18-152-introduction-to-partial-differential-equations-fall-2011/index.htm

### Advanced Mathematical Topics

As a computer science student, I often hear arguments about the uselessness of mathematics. While I neither agree nor have the authority to oppose such views, if everything is forcibly categorized as useful or useless, it indeed becomes quite dull. Therefore, the following advanced mathematics courses, aimed at senior and even graduate students, are available for those interested.

#### Convex Optimization

[Standford EE364A: Convex Optimization](./数学进阶/convex.md)

#### Information Theory

[MIT6.441: Information Theory](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-441-information-theory-spring-2016/syllabus/)

#### Applied Statistics

[MIT18.650: Statistics for Applications](https://ocw.mit.edu/courses/mathematics/18-443-statistics-for-applications-spring-2015/index.htm)

#### Elementary Number Theory

[MIT18.781: Theory of Numbers](https://ocw.mit.edu/courses/mathematics/18-781-theory-of-numbers-spring-2012/index.htm)

#### Cryptography

[Standford CS255: Cryptography](http://crypto.stanford.edu/~dabo/cs255/)

### Programming Fundamentals

> Languages are tools, and you choose the right tool for the right job. Since there's no universally perfect tool, there's no universally perfect language.

#### General

- [MIT-Missing-Semester](编程入门/MIT-Missing-Semester.md)
- [Harvard CS50: This is CS50x](编程入门/C/CS50.md)

#### Java

- [MIT 6.092: Introduction To Programming In Java](编程入门/Java/MIT%206.092.md)

#### Python

- [CS50P: CS50's Introduction to Programming with Python](编程入门/Python/CS50P.md)
- [UCB CS61A: Structure and Interpretation of Computer Programs](编程入门/Python/CS61A.md)
- [MIT6.100L: Introduction to CS and Programming using Python](编程入门/Python/MIT6.100L.md)

#### C++

- [Stanford CS106B/X: Programming Abstractions](编程入门/cpp/CS106B_CS106X.md)
- [Stanford CS106L: Standard C++ Programming](编程入门/cpp/CS106L.md)

#### Rust

- [Stanford CS110L: Safety in Systems Programming](编程入门/Rust/CS110L.md)

#### OCaml

- [Cornell CS3110: OCaml Programming Correct + Efficient + Beautiful](编程入门/Functional/CS3110.md)

### Electronics Fundamentals

#### Basics of Circuits

For computer science students, understanding basic circuit knowledge and experiencing the entire pipeline from sensor data collection to data analysis and algorithm prediction can be very helpful for future learning and developing computational thinking. [EE16A&B: Designing Information Devices and Systems I&II](./电子基础/EE16.md) at UC Berkeley are introductory courses for freshmen in electrical engineering. EE16A focuses on collecting and analyzing data from the real environment through circuits, while EE16B focuses on analyzing these collected data to make predictive actions.

#### Signals and Systems

Signals and Systems is a course I find very worthwhile. Initially, I studied it out of curiosity about Fourier Transform, but after completing it, I was amazed at how Fourier Transform provided a new perspective to view the world, just like differential equations, immersing you in the elegance and magic of precisely depicting the world with mathematics.

[MIT 6.003: Signal and Systems][MIT6.003] provides all course recordings, written assignments, and answers. You can also check out this course's [ancient version](电子基础/Signals_and_Systems_AVO.md).

[MIT6.003]: https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-003-signals-and-systems-fall-2011/lecture-videos/lecture-1-signals-and-systems/

[UCB EE120: Signal and Systems](电子基础/signal.md) has very well-written notes on Fourier Transform and provides many interesting Python programming assignments to practically apply the theories and algorithms of signals and systems.

### Data Structures and Algorithms

Algorithms are the core of computer science and the foundation for almost all professional courses. How to abstract real-world problems into algorithmic problems mathematically and solve them under time and memory constraints using appropriate data structures is the eternal theme of algorithm courses. If you are fed up with your teacher's rote teaching, I highly recommend UC Berkeley's [UCB CS61B: Data Structures and Algorithms](数据结构与算法/CS61B.md) and Princeton's [Coursera: Algorithms I & II](数据结构与算法/Algo.md). Both courses are taught in a deep yet simple manner and have rich and interesting programming experiments to integrate theory with knowledge.

Both of these courses are based on Java. If you prefer C/C++, you can refer to Stanford's data structure and basic algorithm course [Stanford CS106B/X: Programming Abstractions](编程入门/cpp/CS106B_CS106X.md). For those who prefer Python, you can learn MIT's introductory algorithm course [MIT 6.006: Introduction to Algorithms](数据结构与算法/6.006.md).

For those interested in more advanced algorithms and NP problems, consider UC Berkeley's course on algorithm design and analysis [UCB CS170: Efficient Algorithms and Intractable Problems](数据结构与算法/CS170.md) or MIT's advanced algorithms course [MIT 6.046: Design and Analysis of Algorithms](数据结构与算法/6.046.md).

### Software Engineering

#### Introductory Course

There is a fundamental difference between “working” code and high-quality industrial code. Therefore, I highly recommend senior students to take [MIT 6.031: Software Construction](软件工程/6031.md). Based on Java, this course teaches how to write high-quality code that is **bug-resistant, clear, and easy to maintain and modify** with rich and detailed reading materials and well-designed programming exercises. From macro data structure design to minor details like how to write comments, following these details and experiences summarized by predecessors can greatly benefit your future programming career.



#### Professional Course

Of course, if you want to systematically take a software engineering course, I recommend UC Berkeley’s [UCB CS169: Software Engineering](软件工程/CS169.md). However, unlike most software engineering courses, this course does not involve the traditional **design and document** model that emphasizes various class diagrams, flowcharts, and document design. Instead, it adopts the **Agile Development** model, which has become popular in recent years, featuring small team rapid iterations and the **Software as a Service** model using cloud platforms.

### Computer Architecture

#### Introductory Course

Since childhood, I've always heard that the world of computers is made of 0s and 1s, which I didn't understand but was deeply impressed by. If you also have this curiosity, consider spending one to two months learning the barrier-free computer course [Coursera: Nand2Tetris](体系结构/N2T.md). This comprehensive course starts from 0s and 1s, allowing you to build a computer by hand and run a Tetris game on it. It covers compilation, virtual machines, assembly, architecture, digital circuits, logic gates, etc., from top to bottom, from software to hardware. Its difficulty is carefully designed to omit many complex details of modern computers, extracting the most core essence, aiming to make it understandable to everyone. In lower levels, establishing a bird's-eye view of the entire computer system is very beneficial.

#### Professional Course

Of course, if you want to delve into the complex details of modern computer architecture, you still need to take a university-level course [UCB CS61C: Great Ideas in Computer Architecture](体系结构/CS61C.md). This course emphasizes practice, and you will hand-write assembly to construct neural networks in projects, build a CPU from scratch, and more, all of which will give you a deeper understanding of computer architecture, beyond the monotony of "fetch, decode, execute, memory access, write back."

### Introduction to Computer Systems

Computer systems are a vast and profound topic. Before delving into a specific area, having a macro conceptual understanding of each field and some general design principles will reinforce core and even philosophical concepts in your subsequent in-depth study, rather than being shackled by complex internal details and various tricks. In my opinion, the key to learning systems is to grasp these core concepts to design and implement your own systems.

[MIT6.033: System Engineering](http://web.mit.edu/6.033/www/) is MIT's introductory course to systems, covering topics like operating systems, networks, distributed systems, and system security. In addition to the theory, this course also teaches some writing and expression skills, helping you learn how to design, introduce, and analyze your own systems. The accompanying textbook *Principles of Computer System Design: An Introduction* is also very well written and recommended for reading.

[CMU 15-213: Introduction to Computer System](计算机系统基础/CSAPP.md) is CMU’s introductory systems course, covering architecture, operating systems, linking, parallelism, networks, etc., with both breadth and depth. The accompanying textbook *Computer Systems: A Programmer's Perspective* is also of very high quality and strongly recommended for reading.

### Operating Systems

> There’s nothing like writing your own kernel to deepen your understanding of operating systems.

Operating systems provide a set of elegant abstractions to virtualize various complex underlying hardware, providing rich functional support for all application software. Understanding the design principles and internal mechanisms of operating systems is greatly beneficial for a programmer who is not satisfied with just being a coder. Out of love for operating systems, I have taken many operating system courses in different colleges, each with its own focus and merits. You can choose based on your interests.

[MIT 6.S081: Operating System Engineering](操作系统/MIT6.S081.md), offered by the famous PDOS lab at MIT, features 11 projects that modify an elegantly implemented Unix-like operating system xv6. This course made me realize that systems is not about reading PPTs; it's about writing tens of thousands of lines of code.

[UCB CS162: Operating System](操作系统/CS162.md), UC Berkeley’s operating system course, uses the same Project as Stanford — an educational operating system, Pintos. As the teaching assistant for Peking University’s 2022 and 2023 Spring Semester Operating Systems Course, I introduced and improved this Project. The course resources are fully open-sourced, with details on [the course website](https://pku-os.github.io).

[NJU: Operating System Design and Implementation](操作系统/NJUOS.md), offered by Professor Yanyan Jiang at Nanjing University, provides an in-depth and accessible explanation of various operating system concepts, combining a unique system perspective with rich code examples. All course content is in Chinese, making it very convenient for students.

[HIT OS: Operating System](操作系统/HITOS.md), taught by Professor Zhijun Li at Harbin Institute of Technology, is a Chinese course on operating systems. Based on the Linux 0.11 source code, the course places great emphasis on code practice, explaining the intricacies of operating systems from the student's perspective.

### Parallel and Distributed Systems

In recent years, the most common phrase heard in CS lectures is "Moore's Law is coming to an end." As single-core capabilities reach their limits, multi-core and many-core architectures are becoming increasingly important. The changes in hardware necessitate adaptations and changes in the upper-level programming logic. Writing parallel programs has nearly become a mandatory skill for programmers to fully utilize hardware performance. Meanwhile, the rise of deep learning has brought unprecedented demands on computing power and storage, making the deployment and optimization of large-scale clusters a hot topic.

#### Parallel Computing

[CMU 15-418 / Stanford CS149: Parallel Computing](并行与分布式系统/CS149.md) takes you deep into the design principles and trade-offs of modern parallel computing architectures. The course teaches you how to fully leverage hardware resources and software programming frameworks—such as CUDA, MPI, and OpenMP—to write high-performance parallel programs.

#### Distributed Systems

[MIT 6.824: Distributed Systems](并行与分布式系统/MIT6.824.md), like MIT 6.S081, is offered by MIT’s renowned PDOS (Parallel and Distributed Operating Systems) lab. The course is taught by Professor Robert Morris, who was once a legendary hacker—famously known for creating the first computer worm, the Morris Worm.

Each lecture focuses on an in-depth reading of a classic paper in the field of distributed systems, through which the course conveys essential principles and key techniques for designing and implementing distributed systems. The course is also famous for its challenging projects: over the course of four progressively difficult programming assignments, students build a key-value store framework based on the Raft consensus algorithm. These projects offer a firsthand experience of the randomness and complexity brought by concurrency and distribution—often felt most acutely during painful debugging sessions.

### System Security

Whether you chose computer science because of a youthful dream of becoming a hacker, the reality is that becoming a hacker is a long and difficult journey.

#### Theoretical Courses

[UCB CS161: Computer Security](系统安全/CS161.md) at UC Berkeley covers stack attacks, cryptography, website security, network security, and more.

[SU SEED Labs](系统安全/SEEDLabs.md) at Syracuse University, supported by a $1.3 million grant from the NSF, has developed hands-on experimental exercises (called SEED Labs) for cybersecurity education. The course emphasizes both theoretical teaching and practical exercises, including detailed open-source lectures, video tutorials, textbooks (printed in multiple languages), and a ready-to-use virtual machine and Docker-based attack-defense environment. This project is currently used by 1,050 institutions worldwide and covers a wide range of topics in computer and information security, including software security, network security, web security, operating system security, and mobile app security.

#### Practical Courses

After mastering this theoretical knowledge, it's essential to cultivate and hone these "hacker skills" in practice. [CTF competitions](https://ctf-wiki.org/) are a popular way to comprehensively test your understanding and application of computer knowledge in various fields. Peking University also successfully held the [0th and 1st editions](https://geekgame.pku.edu.cn/), encouraging participation to improve skills through practice. Here are some resources I use for learning (and relaxing):

- [CTF-wiki](https://ctf-wiki.org/)
- [CTF-101](https://ctf101.org/)
- [Hacker-101](https://ctf.hacker101.com/)

### Computer Networks

> There’s nothing like writing your own TCP/IP protocol stack to deepen your understanding of computer networks.

The renowned [Stanford CS144: Computer Network](计算机网络/CS144.md) includes 8 projects that guide you in implementing the entire TCP/IP protocol stack.

If you're mainly interested in gaining a theoretical understanding of computer networks, it's recommended to read the [textbook](https://textbook.cs168.io/) that accompanies the course [UCB CS168](计算机网络/CS168.md).


### Database Systems

> There’s nothing like building your own relational database to deepen your understanding of database systems.

CMU's famous database course [CMU 15-445: Introduction to Database System](数据库系统/15445.md) guides you through 4 projects to add various functionalities to the educational relational database [bustub](https://github.com/cmu-db/bustub). The experimental evaluation framework is also open-source, making it very suitable for self-learning. The course experiments also use many new features of C++11, offering a great opportunity to strengthen C++ coding skills.

Berkeley, as the birthplace of the famous open-source database PostgreSQL, has its own course [UCB CS186: Introduction to Database System](数据库系统/CS186.md) where you will implement a relational database in Java that supports SQL concurrent queries, B+ tree indexing, and fault recovery.

### Compiler Theory

> There’s nothing like writing your own compiler to deepen your understanding of compilers.

[Stanford CS143: Compilers](编译原理/CS143.md) guides you through the process of writing a compiler.

### Web Development

Front-end and back-end development are often overlooked in standard computer science curricula, but in reality, having these skills can be extremely beneficial—for example, creating your own personal website or building a polished demo page for a course project.

If you're looking for a quick, two-week crash course, I recommend the [MIT Web Development Course](Web开发/mitweb.md). For a more comprehensive and structured learning experience, check out [Stanford CS142: Web Applications](Web开发/CS142.md).

### Computer Graphics

I personally don't have much background in computer graphics, so I've collected a selection of high-quality courses recommended by the community for those interested in exploring the field.

- [Stanford CS148](计算机图形学/CS148.md)
- [Games101](计算机图形学/GAMES101.md)
- [Games103](计算机图形学/GAMES103.md)
- [Games202](计算机图形学/GAMES202.md)

### Data Science

Data science, machine learning, and deep learning are closely related, with a focus on practical application. Berkeley's [UCB Data100: Principles and Techniques of Data Science](数据科学/Data100.md) lets you master various data analysis tools and algorithms through extensive programming exercises. The course guides you through extracting desired results from massive datasets and making predictions about future data or user behavior. For those looking to learn industrial-level data mining and analysis techniques, Stanford's big data mining course [CS246: Mining Massive Data Sets](https://web.stanford.edu/class/cs246/) is an option.

### Artificial Intelligence

Artificial intelligence has been one of the hottest fields in computer science over the past decade. If you're not content with just hearing about AI advancements in the media and want to delve into the subject, I highly recommend Harvard's renowned CS50 series AI course [Harvard CS50: Introduction to AI with Python](人工智能/CS50.md). The course is concise and covers several major branches of traditional AI, supplemented with rich and interesting Python programming exercises to reinforce your understanding of AI algorithms. However, the content is somewhat simplified for online learners and doesn't delve into deep mathematical theories. For a more systematic and in-depth study, consider an undergraduate-level course like Berkeley's [UCB CS188: Introduction to Artificial Intelligence](人工智能/CS188.md). This course's projects feature the classic game "Pac-Man," allowing you to use AI algorithms to play the game, which is very fun.

### Machine Learning

The most significant recent progress in the field of machine learning is the emergence of deep learning, a branch based on deep neural networks. However, many algorithms based on statistical learning are still widely used in data analysis. If you're new to machine learning and don't want to get bogged down in complex mathematical proofs, start with Andrew Ng's (Enda Wu) [Coursera: Machine Learning](机器学习/ML.md). This course is well-known in the field of machine learning, and Enda Wu, with his profound theoretical knowledge and excellent presentation skills, makes many complex algorithms accessible and practical. The accompanying assignments are also of high quality, helping you get started quickly.

However, completing this course will only give you a general understanding of the field of machine learning. To truly understand the mathematical principles behind these "magical" algorithms or to engage in related research, you need a more "mathematical" course, such as [Stanford CS229: Machine Learning](机器学习/CS229.md) or [UCB CS189: Introduction to Machine Learning](机器学习/CS189.md).

If you plan to pursue scientific research in machine learning theory, you can refer to the [advanced learning roadmap](./机器学习进阶/roadmap.md) shared by [Yao Fu](https://franxyao.github.io/), which includes more in-depth, graduate-level courses.


### Deep Learning

The popularity of AlphaGo a few years ago brought deep learning to the public eye, leading many universities to establish related majors. Many other areas of computer science also use deep learning technology for research, so regardless of your field, you will likely encounter some needs related to neural networks and deep learning. For a quick introduction, I again recommend Andrew Ng's (Enda Wu) [Coursera: Deep Learning](深度学习/CS230.md), a top-rated course on Coursera. Additionally, if you find English-language courses challenging, consider Professor Hongyi Li's course [National Taiwan University: Machine Learning](深度学习/LHY.md). Although titled "Machine Learning," this course covers almost all areas of deep learning and is very comprehensive, making it suitable for getting a broad overview of the field. The professor is also very humorous, with frequent witty remarks in class.

Due to the rapid development of deep learning, there are now many research branches. For further in-depth study, consider the following representative courses:

If you want rigorous fundamentals, start with CMU 11-785: it is dense, practical, and has very little filler content. MIT 6.7960 provides broader coverage beyond mainstream LLM topics, including CV-oriented material, and its assignments/projects are feasible for self-learners. NYU DLSP21 is especially notable because it is taught by Yann LeCun, offering a rare public opportunity to follow a full deep learning course from him.

#### Fundamentals and Breadth

- [CMU 11-785: Introduction to Deep Learning](深度学习/CMU11-785.md)
- [MIT 6.7960: Deep Learning](深度学习/MIT6-7960.md)
- [NYU DLSP21: NYU Deep Learning Spring 2021](深度学习/NYU-DLSP21.md)

#### Computer Vision

- [UMich EECS 498-007 / 598-005: Deep Learning for Computer Vision](深度学习/EECS498-007.md)
- [Stanford CS231n: CNN for Visual Recognition](深度学习/CS231.md)

#### Natural Language Processing

- [Stanford CS224n: Natural Language Processing](深度学习/CS224n.md)

#### Graph Neural Networks

- [Stanford CS224w: Machine Learning with Graphs](深度学习/CS224w.md)

#### Reinforcement Learning

- [UCB CS285: Deep Reinforcement Learning](深度学习/CS285.md)

### Deep Learning Systems

As deep learning models grow in importance and demand increasing computational resources, optimizing the underlying systems for training and inference has become increasingly critical. For those looking to enter this field, a highly recommended resource is [CMU 10-414/714: Deep Learning Systems](./机器学习系统/CMU10-414.md). This course provides a comprehensive "full-stack" understanding of deep learning systems—from high-level architectural design of modern frameworks, to the principles and implementation of automatic differentiation, down to low-level hardware acceleration and real-world deployment.

To deepen theoretical understanding, students are tasked with building a deep learning library from scratch, called Needle, as part of the coursework. This library supports automatic differentiation on computational graphs, GPU-based acceleration, and includes modules for loss functions, data loaders, and optimizers. On top of this, students will implement several common neural network architectures including CNNs, RNNs, LSTMs, and Transformers.

For those with foundational knowledge, the next step would be to explore [MIT 6.5940: TinyML and Efficient Deep Learning Computing](./机器学习系统/EML.md), taught by [Professor Song Han](https://hanlab.mit.edu/songhan). This course dives into techniques for making neural networks more efficient, such as pruning, quantization, distillation, and neural architecture search. It also covers cutting-edge system optimizations for advanced models, including large language models.

### Deep Generative Models

With the explosive popularity of large language models, understanding the principles behind them is essential to staying at the forefront of the field. You can refer to my recommended [learning roadmap](./深度生成模型/roadmap.md) for a guided approach to studying this area.

## Customize Your Course Map

> Better to teach fishing than to give fish.

The course map above inevitably carries strong personal preferences and may not suit everyone. It is more intended to serve as a starting point for exploration. If you want to select your own areas of interest for study, you can refer to the following resources:

- [MIT OpenCourseWare](https://ocw.mit.edu/): MIT's open-sharing project for course resources, featuring thousands of courses from various disciplines, including computer science courses numbered 6.xxx.
- [MIT CS Course List](http://student.mit.edu/catalog/m6a.html): List of CS courses at MIT.
- [UC Berkeley EECS Course Map](https://hkn.eecs.berkeley.edu/courseguides): UC Berkeley's EECS curriculum plan, presenting the categories and prerequisites of various courses in a course map format, most of which are included in this book.
- [UC Berkeley CS Course List](https://www2.eecs.berkeley.edu/Courses/CS/): List of CS courses at UC Berkeley.
- [Stanford CS Course List](https://blog.csdn.net/qq_41220023/article/details/81976967): List of CS courses at Stanford.
