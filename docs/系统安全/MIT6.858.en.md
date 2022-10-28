# MIT 6.858: Computer System Security

## Descriptions

- Offered by: MIT
- Prerequisites: Computer Architecture, basic knowledge about programming and computer system
- Programming Languages: C, Python
- Difficulty:🌟🌟🌟🌟🌟
- Class Hour: 150 hours

This is MIT's Computer Systems Security course. Lectures cover threat models, attacks that compromise security, and techniques for achieving security, based on recent research papers. Topics include operating system (OS) security, capabilities, information flow control, language security, network protocols, hardware security, and security in web applications.

Assignments include labs that involve implementing and compromising a secure web server and web application, and a group final project:

- Lab 1: you will explore the zoobar web application, and use buffer overflow attacks to break its security properties.
- Lab 2: you will improve the zoobar web application by using privilege separation, so that if one component is compromised, the adversary doesn't get control over the whole web application.
- Lab 3: you will build a program analysis tool based on symbolic execution to find bugs in Python code such as the zoobar web application.
- Lab 4: you will improve the zoobar application against browser attacks.

I mainly did Lab 3 in this course. Lab 3 requires you to traverse all the branches of a program by concolic execution, and it is not difficult to do once you understand the idea of symbolic execution. This Lab visually demonstrates the use of symbolic execution.

In the Final Project, you will build a remote file system, [SecFS](https://www.usenix.org/legacy/event/osdi04/tech/full_papers/li_j/li_j.pdf), that provides both confidentiality and integrity in the face of a completely untrusted server. Reference Papers: [SUNDR](https://www.usenix.org/legacy/event/osdi04/tech/full_papers/li_j/li_j.pdf)

## Resources

- Course Website: <http://css.csail.mit.edu/6.858/2022/>
- Assignments: refer to the course website
- Textbook: None
- Assignments:  4 Labs + Final Project / Lab5
