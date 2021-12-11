# 一个仅供参考的CS学习规划
计算机领域方向庞杂，知识浩如烟海，每个细分领域如果深究下去都可以说学无止境。因此，一个清晰明确的学习规划是非常重要的。这一节的内容是对后续整本书的内容的一个概览，你可以将其看作是这本书的目录，按需选择自己感兴趣的内容进行学习。

## 必学工具
> 俗话说：磨刀不误砍柴工。如果你是一个刚刚接触计算机的24k纯小白，学会一些工具将会让你事半功倍。

[MIT-Missing-Semester](编程入门/MIT-Missing-Semester.md)这门课覆盖了这些工具中绝大部分，而且有相当详细的使用指导，强烈建议小白学习。

[翻墙](必学工具/翻墙.md)：由于一些众所周知的原因，谷歌、Github等网站在大陆无法访问。然而很多时候，谷歌和Stackoverflow可以解决你在开发过程中遇到的95%的问题。因此，学会翻墙几乎是一个内地CSer的必备技能。（考虑到法律问题，这个文档提供的翻墙方式仅对拥有北大邮箱的用户适用）。

IDE（Integrated Development Environment）：集成开发环境，说白了就是你写代码的地方。作为一个码农，IDE的重要性不言而喻，一个轻便的编辑器可以让你从产生一个编程点子到开始写代码之间只隔了一个快捷键。个人推荐常用的IDE是VSCode和Sublime（准确的说Sublime只是一个编辑器，但丰富的插件使它基本满足了我的轻量级编程需求）。当然对于大型项目我还是会采用略重型的IDE，例如Pycharm（Python），IDEA（Java）等等（免责申明：所有的IDE都是世界上最好的IDE）。

[Vim](必学工具/Vim.md)：一款命令行编辑工具。这是一个学习曲线有些陡峭的编辑器，不过学会它我觉得是非常有必要的，因为它将极大地提高你的开发效率。现在绝大多数IDE也都支持Vim插件，让你在享受现代开发环境的同时保留极客的炫酷（yue）。

[Git](必学工具/Git.md)：一款代码版本控制工具。Git的学习曲线可能更为陡峭，但出自Linux之父Linus之手的Git绝对是每个学CS的童鞋必须掌握的神器之一。

[Github](必学工具/Github.md)：基于Git的代码托管平台。全世界最大的代码开源社区，大佬集聚地。

[Makefile](必学工具/Makefile.md)：一款工程构建工具。善用Makefile会让你养成代码模块化的习惯，同时也能让你熟悉一些大型工程的编译链接流程。

[LaTex](必学工具/Latex.md)：<del>逼格提升</del>论文排版工具。

[实用工具箱](必学工具/tools.md)：除了上面提到的这些在开发中使用频率极高的工具之外，我还收集了很多实用有趣的免费工具，例如一些下载工具、设计工具、学习网站等等。

## 环境配置
> 你以为的开发 —— 在IDE里疯狂码代码数小时。

> 实际上的开发 —— 配环境配几天还没开始写代码。

under construction.

## 课程地图
> 正如这章开头提到的，这份课程地图仅仅是一个**仅供参考**的课程规划，我作为一个临近毕业的本科生。深感自己没有权利也没有能力向别人宣扬“应该怎么学”。因此如果你觉得以下的课程分类与选择有不合理之处，我全盘接受，并深感抱歉。你可以在下一节<a href="#yourmap">定制属于你的课程地图</a>

以下课程类别中除了含有`基础`和`入门`字眼的以外，并无明确的先后次序，大家只要满足某个课程的先修要求，完全可以根据自己的需要和喜好选择想要学习的课程。
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

上完上面的体验课之后，如果意犹未尽的话，不妨试试MIT的[18.330 : Introduction to numerical analysis](./数学进阶/numerical.md)，这门课的编程作业同样会用Julia编程语言，不过难度和深度上都上了一个台阶。内容涉及了浮点编码、Root finding、线性系统、微分方程等等方面，整门课的主旨就是让你利用离散化的计算机表示去估计和逼近一个数学上连续的概念。这门课的教授还专门撰写了一本配套的开源教材[Fundamentals of Numerical Computation](studyh5.zhihuishu.com/videoStudy.html#/studyVideo?recruitAndCourseId=425a5f5a43524258454a58595e465144)，里面附有丰富的Julia代码实例和严谨的公式推导。

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

### 数据结构与算法

### 软件工程

### 体系结构

### 系统入门

### 操作系统

### 并行与分布式系统

### 系统安全

### 计算机网络

### 数据库系统

### 编译原理

### 数据科学

### 人工智能

### 机器学习

### 深度学习

## <a id="yourmap">定制属于你的课程地图</a>
> 授人以鱼不如授人以渔。

以上的课程规划难免有强烈的个人倾向和喜好，不一定适合所有人，更多的是起到抛砖引玉的作用。如果你想挑选自己感兴趣的方向和内容加以学习，可以参考我在下面列出来的资源。

- [MIT OpenCourseWare](https://ocw.mit.edu/courses/#electrical-engineering-and-computer-science): 麻省理工学院的课程资源开放共享项目，收录了数以千计的各科课程资源，其中计算机类的课号是6.xxx。
- [MIT CS Course List](http://student.mit.edu/catalog/m6a.html)：麻省理工学院的CS课程列表。
- [UC Berkeley EECS Course Map](https://hkn.eecs.berkeley.edu/courseguides)：UC Berkeley的EECS培养方案，以课程地图的方式将各门课程的类别和先修关系一目了然地呈现，其中绝大多数课程本书中均有收录。
- [UC Berkeley CS Course List](https://www2.eecs.berkeley.edu/Courses/CS/?_ga=2.49145060.370293363.1598336094-476512950.1598336094): UC Berkeley的CS课程列表。
- [Stanford CS Course List](https://blog.csdn.net/qq_41220023/article/details/81976967): 斯坦福的CS课程列表。
