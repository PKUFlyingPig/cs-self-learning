# Scoop

## Why Use Scoop

Setting up a development environment in Windows has always been a complex and challenging task. The lack of a unified standard means that the installation methods for different development environments vary greatly, resulting in unnecessary time costs. Scoop helps you uniformly install and manage common development software, eliminating the need for manual downloads, installations, and environment variable configurations.

For example, to install Python and Node.js, you just need to execute:

```powershell
scoop install python
scoop install nodejs
```

## Installing Scoop

Scoop requires [Windows PowerShell 5.1](https://aka.ms/wmf5download) or [PowerShell](https://aka.ms/powershell) as its runtime environment. If you are using Windows 10 or later, Windows PowerShell is built into the system. However, the version of Windows PowerShell built into Windows 7 is outdated, and you will need to manually install a newer version of PowerShell.

> Many students have encountered issues due to setting up Windows user accounts with Chinese usernames, leading to user directories also being named in Chinese. Installing software via Scoop into user directories in such cases may cause some software to execute incorrectly. Therefore, it is recommended to install in a custom directory. For other installation methods, please refer to: [ScoopInstaller/Install](https://github.com/ScoopInstaller/Install)

```powershell
# Set PowerShell execution policy
Set-ExecutionPolicy -ExecutionPolicy RemoteSigned -Scope CurrentUser
# Download the installation script
irm get.scoop.sh -outfile 'install.ps1'
# Run the installation, use --ScoopDir parameter to specify Scoop installation path
.\install.ps1 -ScoopDir 'C:\Scoop'
```

## Using Scoop

Scoop's official documentation is very user-friendly for beginners. Instead of elaborating here, it is recommended to read the [official documentation](https://github.com/ScoopInstaller/Scoop) or the [Quick Start guide](https://github.com/ScoopInstaller/Scoop/wiki/Quick-Start).

## Q&A

### Can Scoop Configure Mirror Sources?

The Scoop community only maintains installation configurations, and all software is downloaded from the official download links provided by the software's creators. Therefore, mirror sources are not provided. If your network environment causes repeated download failures, you may need a bit of [magic](翻墙.md).

### Why Can't I Find Java 8?

For the same reasons mentioned above, the official download links for Java 8 are no longer provided. It is recommended to use [ojdkbuild8](https://github.com/ScoopInstaller/Java/blob/master/bucket/ojdkbuild8.json) as a substitute.

### How Do I Install Python 2?

For software that is outdated and no longer in use, the Scoop community removes it from [ScoopInstaller/Main](https://github.com/ScoopInstaller/Main) and adds it to [ScoopInstaller/Versions](https://github.com/ScoopInstaller/Versions). If you need such software, you need to manually add the bucket:

```powershell
scoop bucket add versions
scoop install python27
```