# WSL - Windows Subsystem for Linux

## For MacOS Users

If you're using MacOS, it's none of necessity to learn WSL, so you can skip this page now.

## Why Linux?

Nowadays we have to admit Windows is necessary to our daily study and entertainment, but when it comes to development, Linux is more friendly.

For instance, when you want to install GCC on Windows, and then configure Visual Studio Code as your editor, you should download MinGW and configure the path environment variable, then even a reboot. It seems to take more than 5 minutes for new learners.

But when in Linux, install GCC only need one line of command:

```shell
# The command varies by distros.
# If you're the root, "sudo" is redundant.
sudo apt install gcc
sudo dnf install gcc
sudo yum install gcc
sudo pacman -S gcc
```

By the way, learning to use Linux, is also necessary for CS students. So why not try to learn Linux as early as possible?

## Why WSL?

In fact, if you wish so, you can install a Linux distro as your main system and install Windows in a VM, reversing the common approach.

But it's better for most of the new learners to learn Linux with VM in Windows, and WSL, as an alternative for VMs, is easier to install, use, and connect.

## Installing WSL and basic configuration

For WSL installing, you can refer to the [official tutorial](https://learn.microsoft.com/en-us/windows/wsl/install).

Commonly, it's necessary to change the software source to your country or region, and configure the international network access. This operation varies by your distro and your approach of international network access.

## Connecting to your WSL

When using powershell, use the command `wsl` will open the WSL shell, like SSH to some extends. You can type and run commands here. You can also add a profile for WSL.

But when you want to develop in the WSL environment, many IDEs and editors, for example, JetBrains IDEs, Visual Studio Code, etc., provide WSL remote development. You can create, delete, modify files, and even debug as usual.
