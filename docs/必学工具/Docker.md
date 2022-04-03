# Docker

## 为什么使用 Docker

使用别人写好的软件/工具最大的障碍是什么——必然是配环境。配环境带来的折磨会极大地消解你对软件、编程本身的兴趣。虚拟机可以解决配环境的一部分问题，但它庞大笨重，且为了某个应用的环境配置好像也不值得模拟一个全新的操作系统。

[Docker](https://www.docker.com/) 的出现让环境配置变得（或许）不再折磨。简单来说 Docker 使用轻量级的“容器”（container）而不是整个操作系统去支持一个应用的配置。应用自身连同它的环境配置被打包为一个个 image 可以自由运行在不同平台的一个个 container 中，这极大地节省了所有人的时间成本。

## 如何学习 Docker

[Docker 官方文档](https://docs.docker.com/)当然是最好的初学教材，但最好的导师一定是你自己——尝试去使用 Docker 才能享受它带来的便利。Docker 在工业界发展迅猛并已经非常成熟，你可以下载它的桌面端并使用图形界面。

当然，如果你像我一样，是一个疯狂的造轮子爱好者，那不妨自己亲手写一个[迷你 Docker](https://github.com/PKUFlyingPig/rubber-docker) 来加深理解。

[KodeKloud Docker for the Absolute Beginner](https://kodekloud.com/courses/docker-for-the-absolute-beginner/) 全面的介绍了 Docker 的基础功能，并且有大量的配套练习，同时提供免费的云环境来完成练习。其余的云相关的课程如 Kubernetes 需要付费，但个人强烈推荐：讲解非常仔细，适合从 0 开始的新手；有配套的 Kubernetes 的实验环境，不用被搭建环境劝退。
