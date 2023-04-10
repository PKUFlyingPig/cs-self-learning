# WSL

## 为什么学习 WSL

实际上没有必要学习 WSL，你应该学习的是 Linux。如果你不知道 Linux 是什么，那么你不需要阅读这篇文章。

### 谁需要 WSL
- 如果你喜欢 Linux，但又苦于 ~Linux不好打游戏~ 日常生活学习中避不开 Office/WeChat（微信）/Voov（腾讯会议）... 这些 Windows 软件。那么 WSL 提供了一个还算不错的替代品。你既可以在 Windows上享受 Linux 环境的各种编程福利和高效工作流，同时你也可以正常使用你的 Windows
- 和虚拟机的差别
    - 其实 WSL 就是微软官方内嵌的虚拟机，体验上比普通虚拟机更加无缝一点，但也会有些其他问题。

### 如何使用 WSL
- 首先我希望你使用的是 win10/win11，尽管 windows 更新真的很扯淡，但一个 CS 学习者永远不应该拒绝更新。
- win11 目前可以通过应用商店下载 WSL，如果是 win10 可能需要[这样](https://learn.microsoft.com/en-us/windows/wsl/install-manual)
- 发行版
    - 绝大数人接触的第一个 Linux 发行版应该是 Ubuntu，WSL 默认发行版也是。如果需要其他发行版，我相信你的 Linux 知识应该足够你找到相应 WSL 版本
- 图形界面
    - 最新的 WSL 包含 wslg 项目因此自带图形界面，但是长得确实很丑。
    - 旧版wsl或者嫌弃wslg丑的同学可以参照[这篇教程](https://medium.com/javarevisited/using-wsl-2-with-x-server-linux-on-windows-a372263533c3) 安装 X-Server 作为 WSL 的 GUI，优点是和 Windows 主题无缝衔接，缺点是没有 WSLG 开箱即用方便。