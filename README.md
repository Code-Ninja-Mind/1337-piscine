# 1337 Piscine

My C programming projects and exercises from the **1337 Coding School Piscine** in Morocco.

The Piscine is an intensive programming period focused on learning C, problem-solving, Unix command-line tools, and peer-to-peer learning. Every line in this repository is code I wrote and can explain.

## 📂 Repository Structure

```text
1337-piscine/
├── C00/        ex00 – ex07
├── C01/        ex00 – ex08
├── C02/        ex00 – ex11
├── C03/        ex00 – ex05
├── C04/        ex00 – ex04
├── C05/        ex00 – ex07
├── C06/        ex00 – ex03
├── C07/        ex00 – ex03
├── C08/        ex00 – ex05
├── C09/        ex00 – ex02
├── C11/        ex00 – ex07
├── Rush00/
├── Rush01/
├── Shell00/    ex00 – ex09
├── Shell01/    ex01 – ex07
├── .gitignore
└── README.md
```

Each module folder contains one sub-folder per exercise (`exNN`) with its source files.

## 📚 Projects

| Folder | Topic | Exercises |
|---|---|---|
| `C00` | Basics: `write`, loops, printing characters and numbers | 8 |
| `C01` | Pointers | 9 |
| `C02` | Strings and character manipulation | 12 |
| `C03` | String functions (compare, concatenate, search) | 6 |
| `C04` | Strings and number conversions | 5 |
| `C05` | Recursion and math | 8 |
| `C06` | Command-line arguments (`argc` / `argv`) | 4 |
| `C07` | Dynamic memory allocation (`malloc`) | 4 |
| `C08` | Headers, macros and structures | 6 |
| `C09` | Static libraries and Makefiles | 3 |
| `C11` | Function pointers | 8 |
| `Rush00` | Team project | 1 |
| `Rush01` | Team project | 1 |
| `Shell00` | Unix shell exercises | 10 |
| `Shell01` | Unix shell exercises | 7 |

## 🛠️ Technologies

- **Language:** C
- **Environment:** Linux (Kali on VirtualBox, plus the school's lab machines)
- **Editor:** VS Code with the integrated terminal
- **Tools:** Git, `cc`, `norminette`, AddressSanitizer, Unix shell (bash / fish)
- **Coding standards:** 1337 / 42 Norm

## ✅ How I check my work

```bash
# compile with the school flags
cc -Wall -Wextra -Werror file.c

# catch memory bugs
cc -Wall -Wextra -Werror -fsanitize=address -g file.c && ./a.out

# check the output byte by byte (hidden characters, missing newline)
./a.out | cat -e

# check the Norm
norminette -R CheckForbiddenSourceHeader file.c
```

## 🎯 Goals

- Strengthen my understanding of C programming.
- Master pointers, memory management, and recursion.
- Understand what happens under the hood: stack, heap, and memory permissions.
- Build debugging discipline: check the output, then hunt the silent bugs.
- Develop good coding habits and write clean, maintainable code.

## ⚠️ Disclaimer

This repository is a personal archive of my Piscine work, shared for educational purposes. Exercise requirements and evaluation rules may vary. Please follow 1337's academic policies and try solving exercises independently before consulting other solutions. Copying code you cannot explain will not help you in the exams.

---

*Written line by line, understood line by line.*
*Part of my journey as a student at 1337 Coding School.*
