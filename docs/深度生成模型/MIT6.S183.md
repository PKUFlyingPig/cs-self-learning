# MIT 6.S183: A Practical Introduction to Diffusion Models

## 课程简介

- 所属大学／机构：MIT
- 先修要求：Python 编程、基础线性代数与概率，并具备一定数学基础；熟悉 PyTorch 会有帮助
- 编程语言：Python (PyTorch)
- 课程难度：🌟🌟🌟（主观参考）
- 预计学时：30–50 小时（含阅读与练习的自学估计，非官方统计）
- 课程版本：IAP 2026

这是一门强调动手实现的扩散模型短课。课程从生成建模与去噪训练出发，依次介绍 DDPM、DDIM、SDE / probability flow ODE、条件生成与 guidance、蒸馏和扩散模型应用。IAP 2026 共 6 讲，每讲都公开视频与课件，并配有两次 problem set 和一个 mini project。

与本站已有的 [MIT 6.S184](MIT6.S184.md) 相比，6.S183 更偏实践：官方使用轻量教学库 `smalldiffusion`，核心代码简短，适合先把训练、采样和修改流程真正跑通，再回到 6.S184 从概率路径与微分方程的角度理解数学原理。

## 自学建议

建议先完整做完两次 problem set，再用 mini project 选择一个小方向进行扩展。比较不同采样器、guidance 或蒸馏方法时，尽量固定数据集和模型配置，分别记录训练开销与采样步数，避免把训练阶段和推理阶段的改动混在一起比较。

## 课程资源

- 课程网站：[官方页面](https://www.practical-diffusion.org/)
- 课程视频：[IAP 2026 六讲视频与课件](https://www.practical-diffusion.org/lectures/)
- 课程教材：[课程材料与推荐阅读](https://www.practical-diffusion.org/materials/)
- 课程作业：[两次 Problem Set](https://www.practical-diffusion.org/assignments/)；[Mini Project](https://www.practical-diffusion.org/project/)
- 课程代码：[smalldiffusion](https://github.com/yuanchenyang/smalldiffusion/)

资源状态核查于 2026-09-12。
