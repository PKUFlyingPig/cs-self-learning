# Vim

## 为什么学习 Vim

在我看来 Vim 编辑器有如下的好处：

- 让你的整个开发过程手指不需要离开键盘，而且光标的移动不需要方向键使得你的手指一直处在打字的最佳位置。
- 方便的文件切换以及面板控制可以让你同时开发多份文件甚至同一个文件的不同位置。
- Vim 的宏操作可以批量化处理重复操作（例如多行 tab，批量加双引号等等）
- Vim 是很多服务器自带的命令行编辑器，当你通过 `ssh` 连接远程服务器之后，由于没有图形界面，只能在命令行里进行开发（当然现在很多 IDE 如 PyCharm 提供了 `ssh` 插件可以解决这个问题）。
- 异常丰富的插件生态，让你拥有世界上最花里胡哨的命令行编辑器。

## 如何学习 Vim

不幸的是 Vim 的学习曲线确实相当陡峭，我花了好几个星期才慢慢适应了用 Vim 进行开发的过程。最开始你会觉得非常不适应，但一旦熬过了初始阶段，相信我，你会爱上 Vim。

Vim 的学习资料浩如烟海，但掌握它最好的方式还是将它用在日常的开发过程中，而不是一上来就去学各种花里胡哨的高级 Vim 技巧。个人推荐的学习路线如下：

- 先阅读[这篇 tutorial](https://missing.csail.mit.edu/2020/editors/)，掌握基本的 Vim 概念和使用方式。
- 用 Vim 自带的 `vimtutor` 进行练习，安装完 Vim 之后直接在命令行里输入 `vimtutor` 即可进入练习程序。
- 最后就是强迫自己使用 Vim 进行开发，IDE 里可以安装 Vim 插件。
- 等你完全适应 Vim 之后新的世界便向你敞开了大门，你可以按需配置自己的 Vim（修改 `.vimrc` 文件），网上有数不胜数的资源可以借鉴。
- 如果你想对配置 Vim 有更加深入的了解，[_Learn Vim Script the Hard Way_](https://learnvimscriptthehardway.stevelosh.com/) 是一个很好的资源。

## 关于键位映射

用 Vim 编辑代码的时候会频繁用到 ESC 和 CTRL 键, 但是这两个键都离 home row 很远, 可以把 CapsLock 键映射到 Esc 或者 Ctrl 键，让手更舒服一些。

Windows 系统可以使用 [Powertoys](https://learn.microsoft.com/en-us/windows/powertoys/) 或者 [AutoHotkey](https://www.autohotkey.com/) 重映射键位。    
MacOS 系统提供了重映射键位的[设置](https://vim.fandom.com/wiki/Map_caps_lock_to_escape_in_macOS)，另外也可以使用 [Karabiner-Elements](https://karabiner-elements.pqrs.org/) 重映射。

但更佳的做法是同时将 CapsLock 映射为 Ctrl 和 Esc，点按为 Esc，按住为 Ctrl。

Windows 系统下，这个[AutoHotKey gist](https://gist.github.com/sedm0784/4443120) 实现了这个功能。    
MacOS 可以导入这个[karabiner rule](https://ke-complex-modifications.pqrs.org/#caps_lock_tapped_escape_held_left_control) 重映射。

## 推荐参考资料

- Neil, Drew. Practical Vim: Edit Text at the Speed of Thought. N.p., Pragmatic Bookshelf, 2015.
- Neil, Drew. Modern Vim: Craft Your Development Environment with Vim 8 and Neovim. United States, Pragmatic Bookshelf.
