# GNU Make

## Why GNU Make

Everyone remembers their first "hello world" program. After editing `helloworld.c`, you needed to use `gcc` to compile and generate an executable file, and then execute it. (If you're not familiar with this, please Google *gcc compilation* and understand the related content first.) However, what if your project consists of hundreds of C source files scattered across various subdirectories? How do you compile and link them together? Imagine if your project takes half an hour to compile (quite common for large projects), and you only changed a semicolon—would you want to wait another half an hour?

This is where GNU Make comes to the rescue. It allows you to define the entire compilation process and the dependencies between target files and source files in a script (known as a `Makefile`). It only recompiles the parts affected by your changes, significantly reducing compilation time.

## How to learn GNU Make

Here is a well-written [document] (https://seisman.github.io/how-to-write-makefile/overview.html) for in-depth and accessible understanding.

Mastering GNU Make is relatively easy, but using it effectively requires continuous practice. Integrate it into your daily development routine, be diligent in learning, and mimic the `Makefile` styles from other excellent open-source projects. Develop your own template that suits your needs, and over time, you will become more proficient in using GNU Make.
