## 为什么使用Git
Git是一款分布式的代码版本控制工具，Linux之父Linus嫌弃当时主流的中心式的版本控制工具太难用还要花钱，就自己开发出了Git用来维护Linux的版本（给大佬跪了）。

Git的设计非常优雅，但初学者通常因为很难理解其内部逻辑因此会觉得非常难用。对Git不熟悉的初学者很容易出现因为误用命令将代码给控制版本控制没了的状况（好吧是我）。

但相信我，和Vim一样，Git是一款你最终掌握之后会感叹“它值得！”的神器。

## 如何学习Git
和Vim不同，我不建议初学者在一知半解的情况下贸然使用Git，因为它的内部逻辑并不能熟能生巧，而是需要花时间去理解。我推荐的学习路线如下：

- 阅读这篇[Git tutorial](https://missing.csail.mit.edu/2020/version-control/)。
- 阅读这本开源书籍[Pro Git](https://git-scm.com/book/en/v2)的Chapter1 - Chapter5，是的没错，学Git需要读一本书（捂脸）。
- 此时你已经掌握了Git的原理和绝大部分用法，接下来就可以在实践中反复巩固Git的命令了。但用好它同样是一门哲学，我个人觉得这篇[如何写好 Commit Message](https://chris.beams.io/posts/git-commit/)的博客非常值得一读。
- 好的此时你已经爱上了Git，你已经不满足于学会它了，你想自己实现一个Git！巧了，我当年也有这样的想法，[这篇tutorial](https://wyag.thb.lt/)可以满足你！
- 什么？光实现一个Git无法满足你？小伙子/小仙女有前途，巧的是我也喜欢造轮子，这两个Github项目[build-your-own-x](https://github.com/danistefanovic/build-your-own-x)和[project-based-learning](https://github.com/tuvtran/project-based-learning)收录了你能想到的各种造轮子教程，比如：自己造个编辑器、自己写个虚拟机、自己写个docker、自己写个TCP等等等等。