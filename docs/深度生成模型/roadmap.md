# 深度生成模型学习路线

近几年大语言模型成为大热的方向，也和笔者博士期间的课题非常相关。这篇路线图旨在分享笔者在熟悉和深入深度生成模型这一领域过程中学习和参考的各类课程资料，方便相关领域的从业者或者对生成模型的底层原理感兴趣的朋友共同学习。由于笔者科研之余时间有限，很多课程的实验并未完成，等后续有时间完成之后会在该目录下一一添加。

其实，大语言模型只是深度生成模型的一个分支，而其他生成模型例如 VAE，GAN，Diffusion Model，Flow 等等，都还在“生成”这一领域占有重要地位，所谓的 AIGC，就是泛指这一类技术。
推荐学习下列课程：

- [MIT 6.S184: Generative AI with Stochastic Differential Equations](./MIT6.S184.md): MIT IAP 小学期的 GenAI 入门课程，主要通过微分方程的视角讲解了 Flow Matching 和 Diffusion Model 背后的数学原理，并且配有简单的小实验让学生在实践中理解，适合对底层数学原理感兴趣的同学入门。

- [MIT 6.S978: Deep Generative Models](https://mit-6s978.github.io/schedule.html): MIT 新晋明星教授何恺明亲授，涵盖了各种生成模型的基础理论和相关前沿论文，几次作业都有丰富的脚手架代码，难度不高但能加深理解，能对这个领域有个快速全貌了解。

- [UCB CS294-158-SP24: Deep Unsupervised Learning](https://sites.google.com/view/berkeley-cs294-158-sp24/home): 强化学习领域的顶级巨佬 Pieter Abbeel 主讲，相比 MIT 的课程内容更加丰富全面，并且有配套课程视频和 Slides。此外课后作业只有测试代码，需要学生自主编写模型架构定义和训练代码，虽然硬核但很适合有志于炼丹的同学练手。众所周知，深度学习理论实践中存在着很多经验技巧，魔鬼往往存在于细节里。没有什么比自己上手训一个模型更能掌握这些细节了。

- [CMU 10423: Generative AI](https://www.cs.cmu.edu/~mgormley/courses/10423/schedule.html): CMU 的 GenAI 课程，相比前两门课更侧重于大语言模型一些，其他内容和前两门课重合较多。不过课程作业都挺有意思，推荐闲暇时间练练手。


OpenAI 的 GPT 系列让大语言模型在 Scaling Law 的指引下展现出惊人的效果，在数学和代码领域取得了很大进展。如果你主要关注大语言模型这个方向，那么推荐如下课程：

- [Stanford CS336: Language Modeling from Scratch](https://stanford-cs336.github.io/spring2025/index.html): 正如课程标题写的，在这门课程中你将从头编写大语言模型的所有核心组件，例如 Tokenizer，模型架构，训练优化器，底层算子，训练数据清洗，后训练算法等等。每次作业的 handout 都有四五十页 pdf，相当硬核。如果你想充分吃透大语言模型的所有底层细节，那么非常推荐学习这门课程。

- [CMU 11868: Large Language Model Systems](https://llmsystem.github.io/llmsystem2025spring/): CMU 的大语言模型系统课程，侧重底层系统优化，例如 GPU 加速，分布式训练和推理，以及各种前沿技术。非常适合从事系统领域的同学对这个方向有个全貌性的了解。课表里还包含了一篇我发表的 PD 分离相关的文章，因此私心推荐一下。课程作业的话会让你先实现一个迷你 Pytorch，然后在上面实现各种大语言模型的系统级优化。

- [CMU 11667: Large Language Models: Methods and Applications](https://cmu-llms.org/) 和 [CMU 11711: Advanced NLP](https://www.phontron.com/class/anlp-fall2024/): 和前两门课相比，这两门课更偏重上层算法和应用，而且每节课都列举了很多相关阅读材料，适合对大语言模型发展前沿的各个方向都有个粗糙的认识，如果对某个子领域感兴趣的话再寻着参考资料深入学习。

除了课程以外，还有很多不错的资料作为参考：

- [Awesome-LLM](https://github.com/Hannibal046/Awesome-LLM): 大语言模型相关资料汇总
- [LLMSys-PaperList](https://github.com/AmberLJC/LLMSys-PaperList): 大语言模型系统相关论文汇总
- [MLsys-Guide](https://github.com/PKU-DAIR/Starter-Guide/blob/main/docs/systems/Readme.md): 深度学习系统入门指南