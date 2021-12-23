# 一个仅供参考的CS学习规划
计算机领域方向庞杂，知识浩如烟海，每个细分领域如果深究下去都可以说学无止境。因此，一个清晰明确的学习规划是非常重要的。这一节的内容是对后续整本书的内容的一个概览，你可以将其看作是这本书的目录，按需选择自己感兴趣的内容进行学习。

## 必学工具
> 俗话说：磨刀不误砍柴工。如果你是一个刚刚接触计算机的24k纯小白，学会一些工具将会让你事半功倍。

[MIT-Missing-Semester](编程入门/MIT-Missing-Semester.md)这门课覆盖了这些工具中绝大部分，而且有相当详细的使用指导，强烈建议小白学习。

[翻墙](必学工具/翻墙.md)：由于一些众所周知的原因，谷歌、Github等网站在大陆无法访问。然而很多时候，谷歌和Stackoverflow可以解决你在开发过程中遇到的95%的问题。因此，学会翻墙几乎是一个内地CSer的必备技能。（考虑到法律问题，这个文档提供的翻墙方式仅对拥有北大邮箱的用户适用）。

IDE（Integrated Development Environment）：集成开发环境，说白了就是你写代码的地方。作为一个码农，IDE的重要性不言而喻，但由于很多IDE是为大型工程项目设计的，体量较大，功能也过于丰富。其实如今一些轻便的文本编辑器配合丰富的插件生态基本可以满足日常的轻量编程需求。个人常用的编辑器是VSCode和Sublime（前者的插件配置非常简单，后者略显复杂但颜值很高）。当然对于大型项目我还是会采用略重型的IDE，例如Pycharm（Python），IDEA（Java）等等（免责申明：所有的IDE都是世界上最好的IDE）。

[Vim](必学工具/Vim.md)：一款命令行编辑工具。这是一个学习曲线有些陡峭的编辑器，不过学会它我觉得是非常有必要的，因为它将极大地提高你的开发效率。现在绝大多数IDE也都支持Vim插件，让你在享受现代开发环境的同时保留极客的炫酷（yue）。

[Git](必学工具/Git.md)：一款代码版本控制工具。Git的学习曲线可能更为陡峭，但出自Linux之父Linus之手的Git绝对是每个学CS的童鞋必须掌握的神器之一。

[Github](必学工具/Github.md)：基于Git的代码托管平台。全世界最大的代码开源社区，大佬集聚地。

[Makefile](必学工具/Makefile.md)：一款工程构建工具。善用Makefile会让你养成代码模块化的习惯，同时也能让你熟悉一些大型工程的编译链接流程。

[CMake](必学工具/CMake.md)：一款功能比Makefile更为强大的构建工具，建议掌握Makefile之后再加以学习。

[LaTex](必学工具/Latex.md)：<del>逼格提升</del>论文排版工具。

[Docker](必学工具/Docker.md)：一款相较于虚拟机更轻量级的软件打包与环境部署工具。

[实用工具箱](必学工具/tools.md)：除了上面提到的这些在开发中使用频率极高的工具之外，我还收集了很多实用有趣的免费工具，例如一些下载工具、设计工具、学习网站等等。

## 好书推荐
> 私以为一本好的教材应当是以人为本的，而不是炫技式的理论堆砌。告诉读者“是什么”固然重要，但更好的应当是教材作者将其在这个领域深耕几十年的经验融汇进书中，向读者娓娓道来“为什么”以及未来应该“怎么做”。

[链接戳这里](./好书推荐.md)

## 环境配置
> 你以为的开发 —— 在IDE里疯狂码代码数小时。

> 实际上的开发 —— 配环境配几天还没开始写代码。

一份灵感来自 [6.NULL MIT-Missing-Semester](编程入门/MIT-Missing-Semester.md) 的 [环境配置指南](https://taylover2016.github.io/%E6%96%B0%E6%9C%BA%E5%99%A8%E4%B8%8A%E6%89%8B%E6%8C%87%E5%8D%97%EF%BC%88%E6%96%B0%E6%89%8B%E5%90%91%EF%BC%89/index.html)，重点在于终端的美化配置。此外还包括常用软件源（如`GitHub`, `Anaconda`, `pip`等）的加速与替换以及一些IDE的配置与激活教程。

More contents under construction.

## 课程地图
> 正如这章开头提到的，这份课程地图仅仅是一个**仅供参考**的课程规划，我作为一个临近毕业的本科生。深感自己没有权利也没有能力向别人宣扬“应该怎么学”。因此如果你觉得以下的课程分类与选择有不合理之处，我全盘接受，并深感抱歉。你可以在下一节<a href="#yourmap">定制属于你的课程地图</a>

以下课程类别中除了含有`基础`和`入门`字眼的以外，并无明确的先后次序，大家只要满足某个课程的先修要求，完全可以根据自己的需要和喜好选择想要学习的课程。

另外由于贡献者的不断增加，这份课程地图已经从最初我的学习经历，发展成为很多CS自学者的资源合集，其中难免有内容交叉甚至重复的。但之所以都列出来，还是希望集百家之长，给大家尽可能多的选择与参考。

### 数学基础
#### 微积分与线性代数
作为大一新生，学好微积分线代是和写代码至少同等重要的事情，相信已经有无数的前人经验提到过这一点，但我还是要不厌其烦地再强调一遍：学好微积分线代真的很重要！你也许会吐槽这些东西岂不是考完就忘，那我觉得你是并没有把握住它们本质，对它们的理解还没有达到刻骨铭心的程度。如果觉得老师课上讲的内容晦涩难懂，不妨参考MIT的[Calculus Course](./数学基础/MITmaths.md)和[18.06: Linear Algebra](./数学基础/MITLA.md)的课程notes，至少于我而言，它帮助我深刻理解了微积分和线性代数的许多本质。顺道再安利一个油管数学网红[**3Blue1Brown**](https://www.youtube.com/c/3blue1brown)，他的频道有很多用生动形象的动画阐释数学本质内核的视频，兼具深度和广度，质量非常高。

#### 信息论入门
作为计算机系的学生，及早了解一些信息论的基础知识，我觉得是大有裨益的。但大多信息论课程都面向高年级本科生甚至研究生，对新手极不友好。而MIT的[6.050J: Information theory and Entropy](./数学基础/information.md)这门课正是为大一新生量身定制的，几乎没有先修要求，涵盖了编码、压缩、通信、信息熵等等内容，非常有趣。

### 数学进阶
#### 离散数学与概率论
集合论、图论、概率论等等是算法推导与证明的重要工具，也是后续高阶数学课程的基础。但我觉得这类课程的讲授很容易落入理论化与形式化的窠臼，让课堂成为定理结论的堆砌，而无法使学生深刻把握理论的本质，进而造成学了就背，考了就忘的怪圈。如果能在理论教学中穿插算法运用实例，学生在拓展算法知识的同时也能窥见理论的力量和魅力。

[UCB CS70 : discrete Math and probability theory](./数学进阶/CS70.md)和[UCB CS126 : Probability theory](./数学进阶/CS126.md)是UC Berkeley的概率论课程，前者覆盖了离散数学和概率论基础，后者则涉及随机过程以及深入的理论内容。两者都非常注重理论和实践的结合，有丰富的算法实际运用实例，后者还有大量的Python编程作业来让学生运用概率论的知识解决实际问题。
#### 数值分析
作为计算机系的学生，培养计算思维是很重要的，实际问题的建模、离散化，计算机的模拟、分析，是一项很重要的能力。而这两年开始风靡的，由MIT打造的[Julia](https://julialang.org/)编程语言以其C一样的速度和Python一样友好的语法在数值计算领域有一统天下之势，MIT的许多数学课程也开始用Julia作为教学工具，把艰深的数学理论用直观清晰的代码展示出来。

[ComputationalThinking](https://computationalthinking.mit.edu/Spring21/)是MIT开设的一门计算思维入门课，所有课程内容全部开源，可以在课程网站直接访问。这门课利用Julia编程语言，在图像处理、社会科学与数据科学、气候学建模三个topic下带领学生理解算法、数学建模、数据分析、交互设计、图例展示，让学生体验计算与科学的美妙结合。内容虽然不难，但给我最深刻的感受就是，科学的魅力并不是故弄玄虚的艰深理论，不是诘屈聱牙的术语行话，而是用直观生动的案例，用简练深刻的语言，让每个普通人都能理解。

上完上面的体验课之后，如果意犹未尽的话，不妨试试MIT的[18.330 : Introduction to numerical analysis](./数学进阶/numerical.md)，这门课的编程作业同样会用Julia编程语言，不过难度和深度上都上了一个台阶。内容涉及了浮点编码、Root finding、线性系统、微分方程等等方面，整门课的主旨就是让你利用离散化的计算机表示去估计和逼近一个数学上连续的概念。这门课的教授还专门撰写了一本配套的开源教材[Fundamentals of Numerical Computation](https://fncbook.github.io/fnc/frontmatter.html)，里面附有丰富的Julia代码实例和严谨的公式推导。

如果你还意犹未尽的话，还有MIT的研究生课程[18.335: Introduction to numerical method](https://ocw.mit.edu/courses/mathematics/18-335j-introduction-to-numerical-methods-spring-2019/index.htm)供你参考。
#### 微分方程
如果世间万物的运动发展都能用方程来刻画和描述，这是一件多么酷的事情呀！虽然几乎任何一所学校的CS培养方案中都没有微分方程相关的必修课程，但我还是觉得掌握它会赋予你一个新的视角来审视这个世界。

由于微分方程中往往会用到很多复变函数的知识，所以大家可以参考[MIT18.04: Complex variables functions](https://ocw.mit.edu/courses/mathematics/18-04-complex-variables-with-applications-spring-2018/)的课程notes来补齐先修知识。

[MIT18.03: differential equations](https://ocw.mit.edu/courses/mathematics/18-03sc-differential-equations-fall-2011/unit-i-first-order-differential-equations/)主要覆盖了常微分方程的求解，在此基础之上[MIT18.152: Partial differential equations](https://ocw.mit.edu/courses/mathematics/18-152-introduction-to-partial-differential-equations-fall-2011/index.htm)则会深入偏微分方程的建模与求解。掌握了微分方程这一有利工具，相信对于你的实际问题的建模能力以及从众多噪声变量中把握本质的直觉都会有很大帮助。
### 数学高阶
作为计算机系的学生，我经常听到数学无用论的论断，对此我不敢苟同但也无权反对，但若凡事都硬要争出个有用和无用的区别来，倒也着实无趣，因此下面这些面向高年级甚至研究生的数学课程，大家按兴趣自取所需。
#### 凸优化
[Standford EE364A: Convex Optimization](./数学进阶/convex.md)
#### 信息论
[MIT6.441: Information Theory](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-441-information-theory-spring-2016/syllabus/)
#### 应用统计学
[MIT18.650: Statistics for Applications](https://ocw.mit.edu/courses/mathematics/18-443-statistics-for-applications-spring-2015/index.htm)
#### 初等数论
[MIT18.781: Theory of Numbers](https://ocw.mit.edu/courses/mathematics/18-781-theory-of-numbers-spring-2012/index.htm)
#### 密码学
[Standford CS255: Cryptography](http://crypto.stanford.edu/~dabo/cs255/)

### 编程入门
> Languages are tools, you choose the right tool to do the right thing. Since there's no universally perfect tool, there's no universally perfect language.
#### Shell
- [MIT-Missing-Semester](编程入门/MIT-Missing-Semester.md)
#### Python
- [Harvard CS50: This is CS50x](编程入门/CS50.md) 最好的计算机基础入门课，你绝对会爱上的。
- [UCB CS61A: Structure and Interpretation of Computer Programs](编程入门/CS61A.md)
#### C++
- [Stanford CS106L: Standard C++ Programming](编程入门/CS106L.md)
#### Rust
- [Stanford CS110L: Safety in Systems Programming](编程入门/CS110L.md)
#### OCaml
- [Cornell CS3110 textbook: Functional Programming in OCaml](https://cs3110.github.io/textbook/cover.html)

### 电子基础
#### 电路基础
作为计算机系的学生，了解一些基础的电路知识，感受从传感器收集数据到数据分析再到算法预测整条流水线，对于后续知识的学习以及计算思维的培养还是很有帮助的。[EE16A&B: Designing Information Devices and Systems I&II](./电子基础/EE16.md)是伯克利EE学生的大一入门课，其中EE16A注重通过电路从实际环境中收集和分析数据，而EE16B则侧重从这些收集到的数据进行分析并做出预测行为。
#### 信号与系统
信号与系统是一门我觉得非常值得一上的课，最初学它只是为了满足我对傅里叶变换的好奇，但学完之后我才不禁感叹，傅立叶变换给我提供了一个全新的视角去看待这个世界，就如同微分方程一样，让你沉浸在用数学去精确描绘和刻画这个世界的优雅与神奇之中。
[MIT 6.003 : signal and systems](https://ocw.mit.edu/courses/electrical-engineering-and-computer-science/6-003-signals-and-systems-fall-2011/lecture-videos/lecture-1-signals-and-systems/)提供了全部的课程录影、书面作业以及答案。而[UCB EE120 : Signal and Systems](电子基础/signal.md)关于傅立叶变换的notes写得非常好，并且提供了6个非常有趣的Python编程作业，让你实践中运用信号与系统的理论与算法。

### 数据结构与算法
#### 数据结构与算法
- [UCB CS61B: Data Structures and Algorithms](数据结构与算法/CS61B.md)
- [Coursera: Algorithms I & II](数据结构与算法/Algo.md)
#### 算法设计与分析
- [UCB CS170: Efficient Algorithms and Intractable Problems](数据结构与算法/CS170.md)

### 软件工程
#### 入门课
一份“能跑”的代码，和一份高质量的工业级代码是有本质区别的。因此我非常推荐低年级的同学学习一下[MIT 6.031: Software Construction](软件工程/6031.md)这门课，它会以Java语言为基础，以丰富细致的阅读材料和精心设计的编程练习传授如何编写**不易出bug、简明易懂、易于维护修改**的高质量代码。大到宏观数据结构设计，小到如何写注释，遵循这些前人总结的细节和经验，对于你此后的编程生涯大有裨益。

#### 专业课
当然，如果你想系统性地上一门软件工程的课程，那我推荐的是伯克利的[UCB CS169: software engineering](软件工程/CS169.md)。但需要提醒的是，和大多学校（包括贵校）的软件工程课程不同，这门课不会涉及传统的**design and document**模式，即强调各种类图、流程图及文档设计，而是采用近些年流行起来的小团队快速迭代**Agile Develepment**开发模式以及利用云平台的**Software as a service**服务模式。

### 体系结构
#### 入门课
从小我就一直听说，计算机的世界是由01构成的，我不理解但大受震撼。如果你的内心也怀有这份好奇，不妨花一到两个月的时间学习[Coursera: Nand2Tetris](体系结构/N2T.md)这门无门槛的计算机课程。这门麻雀虽小五脏俱全的课程会从01开始让你亲手造出一台计算机，并在上面运行俄罗斯方块小游戏。一门课里涵盖了编译、虚拟机、汇编、体系结构、数字电路、逻辑门等等从上至下、从软至硬的各类知识，非常全面。难度上也是通过精心的设计，略去了众多现代计算机复杂的细节，提取出了最核心本质的东西，力图让每个人都能理解。在低年级，如果就能从宏观上建立对整个计算机体系的鸟瞰图，是大有裨益的。

#### 专业课
当然，如果想深入现代计算机体系结构的复杂细节，还得上一门大学本科难度的课程[UCB CS61C: Great Ideas in Computer Architecture](体系结构/CS61C.md)。UC Berkeley作为RISC-V架构的发源地，在体系结构领域算得上首屈一指。其课程非常注重实践，你会在Project中手写汇编构造神经网络，从零开始搭建一个CPU，这些实践都会让你对计算机体系结构有更为深入的理解，而不是仅停留于“取指译码执行访存写回”的单调背诵里。

### 系统入门
计算机系统是一个庞杂而深刻的主题，在深入学习某个细分领域之前，对各个领域有一个宏观概念性的理解，对一些通用性的设计原则有所知晓，会让你在之后的深入学习中不断强化一些最为核心乃至哲学的概念，而不会桎梏于复杂的内部细节和各种trick。因为在我看来，学习系统最关键的还是想让你领悟到这些最核心的东西，从而能够设计和实现出属于自己的系统。

[MIT6.033: System Engineering](http://web.mit.edu/6.033/www/)是MIT的系统入门课，主题涉及了操作系统、网络、分布式和系统安全，除了知识点的传授外，这门课还会讲授一些写作和表达上的技巧，让你学会如何设计并向别人介绍和分析自己的系统。这本书配套的教材**Principles of Computer System Design: An Introduction**也写得非常好，推荐大家阅读。

[CMU 15-213: Introduction to Computer System](体系结构/CSAPP.md)是CMU的系统入门课，内容覆盖了体系结构、操作系统、链接、并行、网络等等，兼具广度和深度，配套的教材**Computer Systems: A Programmer's Perspective**也是质量极高，强烈建议阅读。

### 操作系统
操作系统作为所有应用软件和底层硬件交互的掌舵者，了解它的内部原理和设计原则对于一个不满足于调包侠的程序员来说是很有帮助的。同时，国外操统课程的质量也是让上了多年网课的我也感到瞠目结舌。

[MIT 6.S081: Operating System Engineering](操作系统/MIT6.S081.md)，MIT著名PDOS实验室出品，11个Project会让你在一个2万多行的教学用迷你操作系统上增加各类功能模块。这门课也让我深刻认识到，做系统不是靠PPT念出来的，是得几万行代码一点点累起来的。

[UCB CS162: Operating System](操作系统/CS162.md)，伯克利的操作系统课，采用和Stanford同样的Project —— 一个教学用操作系统Pintos。我作为下学期北京大学操作系统实验班的助教，会尝试引入这个Project，欢迎大家选课尝试，同时课程资源也会全部开源，目前[课程网站](https://pkuos.systems)正在建设当中。

### 并行与分布式系统
想必这两年各类CS讲座里最常听到的话就是“摩尔定律正在走向终结”，此话不假。同时如今深度学习的兴起导致对计算机算力与存储的要求都达到了前所未有的高度，因此并行和分布式系统已成为一项热门技术话题。
#### 并行计算
[CMU 15-418/Stanford CS149: Parallel Computing](并行与分布式系统/CS149.md)
#### 分布式系统
[MIT 6.824: Distributed System](并行与分布式系统/MIT6.824.md)

### 系统安全
不知道你当年选择计算机是不是因为怀着一个中二的黑客梦想，但现实却是成为黑客道阻且长。
#### 理论
[UCB CS161: Computer Security](系统安全/CS161.md)是伯克利的系统安全课程，会涵盖栈攻击、密码学、网站安全、网络安全等等内容。

#### 实践
掌握这些理论知识之后，还需要在实践中培养和锻炼这些“安全素养”。[CTF夺旗赛](https://ctf-wiki.org/)是一项比较热门的系统安全比赛，赛题中会融会贯通地考察你对计算机各个领域知识的理解和运用。北大今年也成功举办了[第0届和第1届](https://geekgame.pku.edu.cn/)，也鼓励大家后期踊跃参与，在实践中提高自己。下面列举一些我平时学习（摸鱼）用到的资源：

- [CTF-wiki](https://ctf-wiki.org/)
- [CTF-101](https://ctf101.org/)
- [Hacker-101](https://ctf.hacker101.com/auth?error=0)

### 计算机网络
计网著名教材《自顶向下方法》的配套学习资源[Computer Networking: A Top-Down Approach](计算机网络/topdown.md)。

没有什么能比自己写个TCP/IP协议栈更能加深自己对计算机网络的理解了，所以不妨试试[Stanford CS144: Computer Network](计算机网络/CS144.md)，8个Project带你实现整个协议栈。

### 数据库系统
没有什么能比自己写个关系型数据库更能加深自己对数据库系统的理解了。
#### C++版
[CMU 15-445: Introduction to Database System](https://15445.courses.cs.cmu.edu/fall2020/)
#### Java版
[UCB CS186: Introduction to Database System](数据库系统/CS186.md)

### 编译原理
没有什么能比自己写个编译器更能加深自己对编译器的理解了。

[Stanford CS143: Compilers](编译原理/CS143.md)

### 计算机图形学
[Games101](计算机图形学/GAMES101.md)

### Web开发
网站的开发很少在计算机的培养方案里被重视，但其实掌握这项技能还是好处多多的，例如搭建自己的个人主页，抑或是给自己的课程项目做一个精彩的展示网页。
#### 两周速成版
[MIT web development course](Web开发/mitweb.md)
#### 系统学习版
[Stanford CS142: Web Applications](Web开发/CS142.md)

### 数据科学
[UCB Data100: Principles and Techniques of Data Science](数据科学/Data100.md)

### 人工智能
#### 入门课
[Harvard CS50’s Introduction to AI with Python](人工智能/CS50.md)
#### 专业课
[UCB CS188: Introduction to Artificial Intelligence](人工智能/CS188.md)

### 机器学习
#### 入门课
[Coursera: Machine Learning](机器学习/ML.md)
#### 专业课
- [Stanford CS229: Machine Learning](机器学习/CS229.md)
- [UCB CS189: Introduction to Machine Learning](机器学习/CS189.md)

### 深度学习
#### 入门课
- [Coursera: Deep Learning](深度学习/CS230.md)
- [台湾国立大学：李宏毅机器学习](深度学习/LHY.md)
#### 计算机视觉
[Stanford CS231n: CNN for Visual Recognition](深度学习/CS231.md)
#### 自然语言处理
[Stanford CS224n: Natural Language Processing](深度学习/CS224n.md)
#### 图神经网络
[Stanford CS224w: Machine Learning with Graphs](深度学习/CS224w.md)
#### 强化学习
[UCB CS285: Deep Reinforcement Learning](深度学习/CS285.md)

## <a id="yourmap">定制属于你的课程地图</a>
> 授人以鱼不如授人以渔。

以上的课程规划难免有强烈的个人倾向和喜好，不一定适合所有人，更多的是起到抛砖引玉的作用。如果你想挑选自己感兴趣的方向和内容加以学习，可以参考我在下面列出来的资源。

- [MIT OpenCourseWare](https://ocw.mit.edu/courses/#electrical-engineering-and-computer-science): 麻省理工学院的课程资源开放共享项目，收录了数以千计的各科课程资源，其中计算机类的课号是6.xxx。
- [MIT CS Course List](http://student.mit.edu/catalog/m6a.html)：麻省理工学院的CS课程列表。
- [UC Berkeley EECS Course Map](https://hkn.eecs.berkeley.edu/courseguides)：UC Berkeley的EECS培养方案，以课程地图的方式将各门课程的类别和先修关系一目了然地呈现，其中绝大多数课程本书中均有收录。
- [UC Berkeley CS Course List](https://www2.eecs.berkeley.edu/Courses/CS/?_ga=2.49145060.370293363.1598336094-476512950.1598336094): UC Berkeley的CS课程列表。
- [Stanford CS Course List](https://blog.csdn.net/qq_41220023/article/details/81976967): 斯坦福的CS课程列表。
