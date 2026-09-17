# MIT 6.S183: A Practical Introduction to Diffusion Models

## Descriptions

- Offered by: MIT
- Prerequisites: Python programming, basic linear algebra and probability, and mathematical maturity; PyTorch experience is helpful
- Programming Languages: Python (PyTorch)
- Difficulty: 🌟🌟🌟 (editorial estimate)
- Class Hour: 30–50 hours (editorial self-study estimate including reading and exercises)
- Course Version: IAP 2026

This short course emphasizes hands-on implementation of diffusion models. It starts from generative modeling and denoising objectives, then covers DDPM, DDIM, SDE / probability flow ODE perspectives, conditioning and guidance, distillation, and applications. The IAP 2026 edition provides six public lecture recordings with slides, two problem sets, and a mini project.

It complements [MIT 6.S184](MIT6.S184.md), which is already listed in this guide and focuses more heavily on the mathematical perspective. 6.S183 uses the lightweight `smalldiffusion` teaching library, making it a good way to get the training, sampling, and modification workflow running before revisiting probability paths and differential equations in 6.S184.

## Self-Study Advice

A practical route is to complete both problem sets before using the mini project to explore one extension. When comparing samplers, guidance methods, or distillation techniques, keep the dataset and model configuration fixed and track training cost separately from sampling steps.

## Course Resources

- Course Website: [Official page](https://www.practical-diffusion.org/)
- Recordings: [Six IAP 2026 lecture videos and slides](https://www.practical-diffusion.org/lectures/)
- Textbooks: [Course materials and suggested readings](https://www.practical-diffusion.org/materials/)
- Assignments: [Two problem sets](https://www.practical-diffusion.org/assignments/); [Mini Project](https://www.practical-diffusion.org/project/)
- Course Code: [smalldiffusion](https://github.com/yuanchenyang/smalldiffusion/)

Resource availability checked on 2026-09-12.
