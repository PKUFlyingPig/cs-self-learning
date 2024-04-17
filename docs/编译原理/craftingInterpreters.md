# Crafting Interpreters

## 课程简介

- 编程语言：java and c
- 课程难度：🌟🌟🌟
- 预计学时：150h

 Bob Nystrom 所著的优秀的 Crafting Interpreters，可在网上免费获取。这本书条理清晰，富有趣味性，是一本非常好的入门书，适合那些想要更好地理解语言和语言工具的人。
 
 整本书实际分为两个部分：  
 （1）语法树：从Scanning的词法到表达式的递归下降分析到statements的语法分析，最后是Resolving and Binding（遍历语法树的语义分析操作），会带你实现整个编译理论的前端部分，即得到语法树的数据结构和错误检查的结果。   
 （2）虚拟机: 语法树可以理解为从上而下的分析高级语言，这部分就是从下往上的理解编译理论，最后编译生成的结果可以分为两种，其一是指令，其直接运行在计算机上，由译码器，pc等共同操作，其二是Bytecode（字节码），如java的编译结果class文件，其运行在JVM虚拟机中，由虚拟机解释执行生成的字节码，这一部分使用c实现一个virtual machine，还包括Garbage Collection等内容。


## 课程资源

- 课程网站：https://craftinginterpreters.com/

