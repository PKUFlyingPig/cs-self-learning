# WSL - Windows Subsystem for Linux

## 对于 MacOS 用户

MacOS 本身是一种类 Unix 系统，所以没必要学 WSL，本页可以跳过。

## 为什么选择 Linux？

Windows 对我们的日常学习和娱乐非常重要，但 Linux 对于开发者的开发活动来说更加友好。

例如，如果你想在 Windows 上安装 GCC，然后配置 Visual Studio Code 作为你的编辑器，你需要下载 MinGW，然后配置环境变量 PATH，还可能需要重启。对于初学者来说，这似乎需要超过 5 分钟的时间。

但在 Linux 中，安装 GCC 只需要一条命令：

```shell
# 命令因发行版而异。
# 如果你是root用户，去掉“sudo”。
sudo apt install gcc
sudo dnf install gcc
sudo yum install gcc
sudo pacman -S gcc
```

另外，学习使用 Linux 也是 CS 学生的必修课。尽早尝试学习 Linux 也是大有裨益的。

## 为什么选择 WSL？

如果你愿意，你可以反其道而行之，安装一个 Linux 发行版作为你的主要系统，并在虚拟机中安装 Windows。

但对于大多数新学习者来说，在 Windows 中使用虚拟机学习 Linux 更合适，WSL 也可以称为一种虚拟机，但更容易安装、使用和连接。

## 安装 WSL 和基本配置

对于 WSL 的安装，你可以参考[官方教程](https://learn.microsoft.com/zh-cn/windows/wsl/install)。

记得换源和配置魔法。对于不同的发行版或魔法，操作可能有所区别。

## 连接到你的 WSL

当使用 PowerShell 时，使用命令`wsl`，即可打开 WSL 的 shell 界面，类似于 SSH。你可以在这里输入和运行命令。你也可以为 WSL 添加一个 Powershell 配置文件。

许多 IDE 和编辑器，例如，JetBrains IDEs、Visual Studio Code 等，都提供了 WSL 远程开发功能。你可以像操作本机 C:\文件一样创建、删除、修改文件，甚至还可以进行调试。
