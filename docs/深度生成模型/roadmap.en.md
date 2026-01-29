# Deep Generative Models Roadmap

In recent years, large language models (LLMs) have become a hot topic, which is also highly relevant to the author’s PhD research. This roadmap aims to share various course materials and references that the author found useful while getting familiar with and delving into the field of deep generative models. It’s intended to help practitioners in related areas or anyone interested in the underlying principles of generative models. Due to limited time outside of research, the author has not completed all the course assignments; updates will be added gradually when time permits.

In fact, LLMs are just one branch of deep generative models. Other types such as VAEs, GANs, Diffusion Models, and Flows still play an important role in the broader domain of "generation." The term AIGC (AI-generated content) broadly refers to these technologies.

Recommended courses for learning:

- [MIT 6.S184: Generative AI with Stochastic Differential Equations](./MIT6.S184.md): An introductory GenAI course offered during MIT's IAP term. It explains the mathematical foundations behind Flow Matching and Diffusion Models from the perspective of differential equations, accompanied by simple hands-on labs to help students grasp the concepts through practice. Ideal for those interested in the underlying mathematical principles.

- [MIT 6.S978: Deep Generative Models](https://mit-6s978.github.io/schedule.html): Taught by MIT’s rising star Prof. Kaiming He, this course covers fundamental theories and cutting-edge papers related to various generative models. The assignments include well-prepared scaffold code. While not overly difficult, they help deepen understanding and provide a quick, comprehensive view of the field.

- [UCB CS294-158-SP24: Deep Unsupervised Learning](https://sites.google.com/view/berkeley-cs294-158-sp24/home): Taught by reinforcement learning giant Pieter Abbeel. Compared to the MIT course, this one is more comprehensive and includes lecture videos and slides. The homework only provides test code, so students must implement model architecture and training code themselves. Though demanding, it’s ideal for those who want hands-on experience in training models. As is well known, there are many practical tricks in deep learning, and the devil is often in the details. Nothing teaches those details better than training a model yourself.

- [CMU 10423: Generative AI](https://www.cs.cmu.edu/~mgormley/courses/10423/schedule.html): CMU’s GenAI course focuses more on large language models compared to the previous two, but shares much of the same content otherwise. The assignments are quite engaging and worth trying out in your spare time.

The GPT series by OpenAI has demonstrated remarkable performance under the guidance of scaling laws, especially in mathematics and coding. If you are primarily interested in LLMs, the following courses are recommended:

- [Stanford CS336: Language Modeling from Scratch](https://stanford-cs336.github.io/spring2025/index.html): As the title suggests, this course teaches you to build all the core components of an LLM from scratch, such as the tokenizer, model architecture, training optimizer, low-level operators, data cleaning, and post-training algorithms. Each assignment has a 40-50 page PDF handout—very rigorous. Highly recommended if you want to fully understand every low-level detail of LLMs.

- [CMU 11868: Large Language Model Systems](https://llmsystem.github.io/llmsystem2025spring/): This CMU course focuses on system-level optimization of LLMs, including GPU acceleration, distributed training/inference, and cutting-edge techniques. Great for students in systems research to gain a holistic understanding of the field. (Disclosure: One of my papers on PD decoupling is included in the syllabus, hence the personal recommendation.) Assignments involve implementing a mini-PyTorch framework and then building system-level LLM optimizations on top of it.

- [CMU 11667: Large Language Models: Methods and Applications](https://cmu-llms.org/) and [CMU 11711: Advanced NLP](https://www.phontron.com/class/anlp-fall2024/): Compared to the previous two, these courses focus more on higher-level algorithms and applications. Each lecture includes many recommended readings, making them suitable for gaining a broad understanding of LLM research frontiers. You can then dive deeper into any subfield that interests you based on the reading materials.

In addition to courses, the following resources are also highly recommended:

- [Awesome-LLM](https://github.com/Hannibal046/Awesome-LLM): A curated list of LLM-related resources.
- [LLMSys-PaperList](https://github.com/AmberLJC/LLMSys-PaperList): A collection of system-related papers on LLMs.
- [MLsys-Guide](https://github.com/PKU-DAIR/Starter-Guide/blob/main/docs/systems/Readme.md): A beginner’s guide to deep learning systems.
