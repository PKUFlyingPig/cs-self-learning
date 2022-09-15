<figure markdown>
  ![Image title](./images/title.png){ width="600" }
</figure>

# Foreword

**The English version is still under development, please check [this issue](https://github.com/PKUFlyingPig/cs-self-learning/issues/222) if you want to contribute.**

This is a self-learning guide to computer science, and a memento of my three years of self-learning at university.

It is also a gift to the young students at Peking University. It would be a great encouragement and comfort to me if this book could be of even the slightest help to you in your college life.

The book is currently organized to include the following sections (if you have other good suggestions, or would like to join the ranks of contributors, please feel free to email [zhongyinmin@pku.edu.cn](mailto:zhongyinmin@pku.edu.cn) or ask questions in the issue).

- Productivity Toolkit: IDE, VPN, StackOverflow, Git, Github, Vim, Latex, GNU Make and so on.
- Environment configuration: PC/Server development environment setup, DevOps tutorials and so on.
- Book recommendations: Those who have read the CSAPP must have realized the importance of good books. I will list links to books and resources in different areas of Computer Science that I find rewarding to read.
- **List of high quality CS courses**: I will summarize all the high quality foreign CS courses I have taken into different categories and give relevant self-learning advice. Most of them will have a separate repository containing relevant resources as well as my homework/project implementations.

## The place where dreams start —— CS61A

In my freshman year, I was a novice who knew nothing about computers. I installed a giant IDE Visual Studio and fight with OJ every day. With my high school maths background, I did pretty well in maths courses, but I felt struggled to learn courses in my major. When it came to programming, all I could do was open up that clunky IDE, create a new project that I didn't know exactly what it was for, and then `cin`, `cout`, `for` loops, and then CE, RE, WA loops. I was in a state where I was desperately trying to learn well but I didn't know how to learn. I listened carefully in class but I couldn't solve the homework problems. I spent almost all my spare time doing the homework after class, but the results were disappointing. I still retain the source code of the project for Introduction to Computing course —— a single 1200-line C++ file with no header files, no class abstraction, no unit tests, no makefile, no version control. The only good thing is that it can run, the disadvantage is the complement of "can run". For a while I wondered if I wasn't cut out for computer science, as all my childhood imaginings of geekiness had been completely ruined by my first semester's experience.

It all turned around during the winter break of my freshman year, when I had a hankering to learn Python. I overheard someone recommend CS61A, a freshman introductory course at UC Berkeley on Python. I'll never forget that day, when I opened the [CS61A](https://cs61a.org/) course website. It was like Columbus discovering a new continent, and I opened the door to a new world.

I finished the course in 3 weeks and for the first time I felt that CS could be so fulfilling and interesting, and I was shocked that there existed such a great course in the world.

To avoid any suspicion of pandering to foreign courses, I will tell you about my experience of studying CS61A from the perspective of a pure student.

- ***Course website developed by course staffs***: The course website integrates all the course resources into one, with a well organised course schedule, links to all slides, recorded videos and homework, detailed and clear syllabus, list of exams and solutions from previous years. Aesthetics aside, this website is so convenient for students.

- ***Textbook written by course instructor***: The course instructor has adapted the classic MIT textbook *Structure and Interpretation of Computer Programs* (SICP) into Python (the original textbook was based on Scheme). This is a great way to ensure that the classroom content is consistent with the textbook, while adding more details. The entire book is open source and can be read directly online.

- ***Various, comprehensive and interesting homework***: There are 14 labs to reinforce the knowledge gained in class, 10 homework assignments to practice, and 4 projects each with thousands of lines of code, all with well-organized skeleton code and babysitting instructions. Unlike the old-school OJ and Word document assignments, each lab/homework/project has a detailed handout document, fully automated grading scripts, and CS61A staffs have even developed an [automated assignment submission and grading system](https://okpy.org/). Of course, one might say "How much can you learn from a project where most of code are written by your teaching assistants?" . For someone who is new to CS and even stumbling over installing Python, this well-developed skeleton code allows students to focus on reinforcing the core knowledge they've learned in class, but also gives them a sense of achievement that they already can make a little game despite of learning Python only for a month. It also gives them the opportunity to read and learn from other people's high quality code so that they can reuse it later. I think in the freshman year, this kind of skeleton code is absolutely beneficial. The only bad thing perhaps is for the instructors and teaching assistants, as developing such assignments can conceivably require a considerable time commitment.

- ***Weekly discussion sessions***: The teaching assistants will explain the difficult knowledge in class and add some supplementary materials which may not be covered in class. Also, there will be exercises from exams of previous years. All the exercises are written in LaTeX with solutions.

In CS61A, You don't need any prerequesites about CS at all. You just need to pay attention, spend time and work hard. The feeling that you do not know what to do, that you are not getting anything in return for all the time you put in, is gone. It suited me so well that I fell in love with self-learning.

Imagine that if someone could chew up the hard knowledge and present it to you in a vivid and straightforward way, with so many fancy and varied projects to reinforce your theoretical knowledge, you'd think they were really trying their best to make you fully grasp the course, and it was even an insult to the course builders not to learn it well.

If you think I'm exaggerating, start with [CS61A](https://cs61a.org/), because it's where my dreams began.

## Why write this book?

In the 2020 Fall semester, I worked as a teaching assistant for the class Introduction to Computer Systems at Peking University. At that time, I had been studying totally on my own for over a year. I enjoyed this style of learning immensely. To share this joy, I have made a [CS Self-learning Materials List](https://github.com/PKUFlyingPig/Self-learning-Computer-Science) for students in my seminar. It was purely on a whim at the time, as I wouldn't dare to encourage my students to skip classes and study on their own.

But after another year of maintenance, the list has become quite comprehensive, covering most of the courses in Computer Science, Artificial Intelligence and Soft Engineering, and I have built separate repositories for each course, summarising the self-learning materials that I used.

In my last college year, when I opened up my curriculum book, I realized that it was already a subset of my self-learning list. By then, it was only two and a half years after I had started my self-learning journey. Then, a bold idea came to my mind: perhaps I could create a self-learning book, write down the difficulty I encountered and the interest I found during these years of self-learning, hoping to make it easy for students who may also enjoy self-learning to start their wonderful self-learning journey.

If you can build up the whole CS foundation in less than three years, have relatively solid mathematical skills and coding ability, experience dozens of projects with thousands of lines of code, master at least C/C++/Java/JS/Python/Go/Rust and other mainstream programming languages, have a good understanding of algorithms, circuits, architectures, networks, operating systems, compilers, artificial intelligence, machine learning, computer vision, natural language processing, reinforcement learning, cryptography, information theory, game theory, numerical analysis, statistics, distributed systems, parallel computing, database systems, computer graphics, web development, cloud computing, supercomputing etc. I think you will be confident enough to choose the area you are interested in, and you will be quite competitive in both industry and academia.

I firmly believe that if you have read to this line, you do not lack the ability and committment to learn CS well, you just need a good teacher to teach you a good course. And I will try my best to pick such courses for you, based on my three years of experience.

## Pros

For me, the biggest advantage of self-learning is that I can adjust the pace of learning entirely according to my own progress. For difficult parts, I can watch the videos over and over again, Google it online and ask questions on StackOverflow until I have it all figured out. For those that I mastered relatively quickly, I could skip them at twice or even three times the speed.

Another great thing about self-learning is that you can learn from different perspectives. I have taken core courses such as architectures, networking, operating systems, and compilers from different universities. Different instructors may have different views on the same knowledge, which will broaden your horizon.

A third advantage of self-learning is that you do not need to go to the class, listening to the boring lectures.

## Cons

Of course, as a big fan of self-learning, I have to admit that it has its disadvantages.

The first is the difficulty of communication. I'm actually a very keen questioner, and I like to follow up all the points I don't understand. But when you're facing a screen and you hear a teacher talking about something you don't understand, you can't go to the other end of the network and ask him or her for clarification. I try to mitigate this by thinking independently and making good use of Google, but it would be great to have a few friends to study together. You can refer to `README` for more information on participating a community group.

The second thing is that these courses are basically in English. From the videos to the slides to the assignments, all in English. You may struggle at first, but I think it's a challenge that if you overcome, it will be extremely rewarding. Because at the moment, as reluctant as I am, I have to admit that in computer science, a lot of high quality documentation, forums and websites are all in English.

The third, and I think the most difficult one, is self-discipline. Because have no DDL can sometimes be a really scary thing, especially when you get deeper, many foreign courses are quite difficult. You have to be self-driven enough to force yourself to settle down, read dozens of pages of Project Handout, understand thousands of lines of skeleton code and endure hours of debugging time. With no credits, no grades, no teachers, no classmates, just one belief - that you are getting better.

## Who is this book for?

As I said in the beginning, anyone who is interested in learning computer science on their own can refer to this book. If you already have some basic skills and are just interested in a particular area, you can selectively pick and choose what you are interested in to study. Of course, if you are a novice who knows nothing about computers like I did back then, and just begin your college journey, I hope this book will be your cheat sheet to get the knowledge and skills you need in the least amount of time. In a way, this book is more like a course search engine ordered according to my experience, helping you to learn high quality CS courses from the world's top universities without leaving home.

Of course, as an undergraduate student who has not yet graduated, I feel that I am not in a position nor have the right to preach one way of learning. I just hope that this material will help those who are also self-motivated and persistent to gain a richer, more varied and satisfying college life.

## Special thanks

I would like to express my sincere gratitude to all the professors who have made their courses public for free. These courses are the culmination of decades of their teaching careers, and they have chosen to selflessly make such a high quality CS education available to all. Without them, my university life would not have been as fulfilling and enjoyable. Many of the professors would even reply with hundreds of words in length after I had sent them a thank you email, which really touched me beyond words. They also inspired me all the time that if decide to do something, do it with all heart and soul.

## Want to join as a contributor?

There is a limit to how much one person can do, and this book was written by me under a heavy research schedule, so there are inevitably imperfections. In addition, as I work in the area of systems, many of the courses focus on systems, and there is relatively little content related to advanced mathematics, computing theory, and advanced algorithms. If any of you would like to share your self-learning experience and resources in other areas, you can directly initiate a Pull Request in the project, or feel free to contact me by email ([zhongyinmin@pku.edu.cn](mailto:zhongyinmin@pku.edu.cn)).
