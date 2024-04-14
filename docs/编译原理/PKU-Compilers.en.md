# PKU Compiler Principles Practice

## Descriptions

- Offered by: Peking University
- Prerequisites: Basics of Computer Systems, Data Structures and Algorithms, Programming Fundamentals
- Programming Languages: Choose one from C/C++/Rust
- Difficulty: 🌟🌟🌟🌟
- Class Hour: 60 hours

The practice course of Compiler Principles at Peking University aims to teach student to implement a compiler that translates from a simplified version of the C language — SysY to RISC-V assembly. Unlike other courses that provide skeleton code, this course grants you a great degree of freedom. The test programs only check the correctness of the assembly code your compiler outputs, without imposing any restrictions on the specific design of your compiler or even the programming language used. You need to start from scratch and gradually build your own compiler. However, this is quite challenging even for Peking University students, so in 2022, the course TA [@MaxXing](https://github.com/MaxXSoft) significantly upgraded this course, designing a special intermediate representation, Koopa IR, for the course. Koopa IR is more rationally designed and, while similar to LLVM IR, it simplifies many details, focusing only on the practical aspects needed. At the same time, a corresponding runtime library was designed for Koopa IR, allowing you to easily parse/generate/modify/output Koopa IR without having to consider other superfluous details. Additionally, a detailed document breaks down the large project of building a compiler into nine small steps, making it easier for any student willing to invest the time to implement their own compiler.

The following content is excerpted from @MaxXing's [Blog](https://blog.maxxsoft.net/index.php/archives/145/) which introduces this course in more details:

---

You may have seen countless tutorials teaching how to write a compiler, but they may have various issues that still leave you puzzled about where to start:

- The tutorials are not aimed at people with "zero compiler foundation," and can be difficult to understand.
- They teach how to make a compiler but not why to do it that way, leaving you still in a fog after reading.
- Complicated environment setup is required before starting coding, discouraging beginners at the start.
- The initial tasks are unrelated to "compiling a program," and it can take a month following the tutorial to see a running program from your compiler, resulting in a long feedback cycle.
- What you finally write is just an interpreter, or it can't compile to a real ISA (like outputting some bytecode), or it's highly dependent on other frameworks (like LLVM), which doesn't let you feel the accomplishment of "I really made a compiler" and the exhilaration of "doing everything myself."
- The compiler implemented can only compile simple programs, such as sorting algorithms, which seem very boring. Who sorts just for fun?
- Tutorials and their resources are not in Chinese, or they require payment and are not open source.

During my graduate studies, I was the TA in the undergraduate Compiler Principles course. To help undergraduates better understand how compilers work, after referring to several other tutorials, I designed a new set of tutorials that teach you how to write a compiler from scratch:

- You can use C/C++/Rust to develop your compiler, the tutorial only requires you to have the ability to program in these languages, without any need for foundational knowledge of compiler principles or related practical experience.
- The tutorial not only tells you how to write a compiler but also why to do it that way, and what else you could do.
- The tutorial adopts an incremental, iterative approach, guiding you from a compiler that can only handle the main function to gradually expanding to implement a compiler for a C-like language that includes control flow, function calls, and arrays. The compiler can output RISC-V assembly.
- Providing a Docker-based environment for one-click setup. The environment also includes automatic testing scripts for one-click testing of your compiler.
- The tutorial introduces tools that can take over some of the tedious grunt work, such as generating lexer/parser, parsing and generating IR, etc. The rest, like building AST, semantic analysis, generating IR, and producing target code, is entirely up to you to implement.
- The compiler you ultimately implement will be capable of compiling many complex programs, such as the Mandelbrot set drawing program or a Lisp interpreter (this interpreter can even interpret another Lisp interpreter). We will provide these programs for you to experience the real joy of using your compiler.
- The tutorial and its accompanying tools, experimental environments, etc., are all open source and completely free!
- You can access this tutorial on GitHub Pages: [Peking University Compiler Practice Course Online Documentation](https://pku-minic.github.io/online-doc/#/). If you have never tried writing a compiler yourself, why not try it now?

My wish is that everyone feels the joy of writing compilers.

---

Finally, my highest regards to @MaxXing. — from PKUFlyingPig