# Advanced Machine Learning Roadmap

This learning path is suitable for students who have already learned the basics of machine learning (ML, NLP, CV, RL), such as senior undergraduates or junior graduate students, and have published at least one paper in top conferences (NeurIPS, ICML, ICLR, ACL, EMNLP, NAACL, CVPR, ICCV) and are interested in pursuing a research path in machine learning.

The goal of this path is to lay the theoretical groundwork for understanding and publishing papers at top machine learning conferences, especially in the track of Probabilistic Methods.

There can be multiple advanced learning paths in machine learning, and this one represents the best path as understood by the author [Yao Fu](https://franxyao.github.io/), focusing on probabilistic modeling methods under the Bayesian school and involving interdisciplinary knowledge.

## Essential Textbooks

- PRML: Pattern Recognition and Machine Learning by Christopher Bishop
- AoS: All of Statistics by Larry Wasserman

These two books respectively represent classic teachings of the Bayesian and frequentist schools, complementing each other nicely.

## Reference Books

- MLAPP: Machine Learning: A Probabilistic Perspective by Kevin Murphy
- Convex Optimization by Stephen Boyd and Lieven Vandenberghe

## Advanced Books

- W&J: Graphical Models, Exponential Families, and Variational Inference by Martin Wainwright and Michael Jordan
- Theory of Point Estimation by E. L. Lehmann and George Casella

## Reading Guidelines

### How to Approach

- Essential textbooks are a must-read.
- Reference books are like dictionaries: consult them when encountering unfamiliar concepts (instead of Wikipedia).
- Advanced books should be approached after completing the essential textbooks, which should be read multiple times for thorough understanding.
- Contrastive-comparative reading is crucial: open two books on the same topic, compare similarities, differences, and connections.
- Recall previously read papers during reading and compare them with textbook content.

### Basic Pathway

1. Start with AoS Chapter 6: Models, Statistical Inference, and Learning as a basic introduction.
2. Read PRML Chapters 10 and 11:
   - Chapter 10 covers Variational Inference, and Chapter 11 covers MCMC, the two main routes for Bayesian inference.
   - Consult earlier chapters in PRML or MLAPP for any unclear terms.
   - AoS Chapter 8 (Parametric Inference) and Chapter 11 (Bayesian Inference) can also serve as references. Compare these chapters with the relevant PRML chapters.
3. After PRML Chapters 10 and 11, proceed to AoS Chapter 24 (Simulation Methods) and compare it with PRML Chapter 11, focusing on MCMC.
4. If foundational concepts are still unclear, review PRML Chapter 3 and compare it with AoS Chapter 11.
5. Read PRML Chapter 13 (skip Chapter 12) and compare it with MLAPP Chapters 17 and 18, focusing on HMM and LDS.
6. After completing PRML Chapter 13, move on to Chapter 8 (Graphical Models).
7. Cross-reference these topics with CMU 10-708 PGM course materials.

By this point, you should have a grasp of:

- Basic definitions of probabilistic models
- Exact inference - Sum-Product
- Approximate inference - MCMC
- Approximate inference - VI

Afterward, you can proceed to more advanced topics.