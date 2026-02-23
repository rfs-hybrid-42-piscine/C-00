*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-Piscine/main/assets/covers/cover-c00.png" alt="C 00 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 00: Introduction to C Programming</h1>
  
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" alt="Grade badge" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 00** is the first purely programming-focused module of the C Piscine @ 42. It serves as the foundation for the rest of the curriculum.

The primary goal of this project is to introduce the strict **42 Norm**, basic C syntax, loops, conditional statements, and ASCII math. Furthermore, it introduces severe standard library restrictions: you are generally only allowed to use the `write` function from `<unistd.h>`. You must build everything else—from printing numbers to formatting strings—completely from scratch.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing manual memory manipulation and ASCII character values.*

### 🔹 The Basics (ASCII & Write)
| Exercise | Concept & Logic |
| :--- | :--- |
| **`ex00: ft_putchar`** | **The Foundation:** Creating a wrapper function that displays the character passed as a parameter. <br><br>**Logic:** The standard `printf` is forbidden. To display the character, we must use `write(1, &c, 1)`, passing the file descriptor `1`, the memory address of the character `&c`, and the number of bytes `1`. |
| **`ex01: ft_print_alphabet`** | **Loops & ASCII:** Printing the alphabet in lowercase, on a single line, in ascending order. <br><br>**Logic:** In C, characters are just integers representing ASCII values ('a' is `97`, 'z' is `122`). We can use a `while` loop starting at 'a' and incrementing the character by `1` until it reaches 'z'. |
| **`ex02: ft_print_reverse_alphabet`** | **Decrementing Loops:** Printing the alphabet in lowercase, on a single line, in descending order. <br><br>**Logic:** The exact same logic as `ex01`, but initializing the variable at 'z' and using the decrement operator (`--`) until it reaches 'a'. |
| **`ex03: ft_print_numbers`** | **Character vs Integer:** Printing all digits (0 to 9) on a single line, in ascending order. <br><br>**Logic:** We loop from the *character* '0' (ASCII 48) to the character '9' (ASCII 57). It is crucial to understand that printing the integer `0` using `write` will not output the number "0", but rather the ASCII null character. |
| **`ex04: ft_is_negative`** | **Conditionals:** Displaying 'N' if the integer passed as a parameter is negative, or 'P' if it is positive or zero. <br><br>**Logic:** A simple introduction to `if/else` statements to check the sign of a number. If the integer `n < 0`, write 'N'. Otherwise, write 'P'. |

### 🚀 Advanced Logic & Formatting (Optional)
| Exercise | Concept & Logic |
| :--- | :--- |
| **`ex05: ft_print_comb`** | **Nested Loops:** Displaying all unique combinations of three distinct digits, in ascending order. <br><br>**Logic:** Requires three nested `while` loops. To ensure the combinations are unique and ascending (e.g., printing `012` to `789` while skipping `102` or `022`), initialize the second loop's counter to `i + 1`, and the third loop's counter to `j + 1`. |
| **`ex06: ft_print_comb2`** | **Formatting & Math:** Displaying all different combinations of two distinct two-digit numbers (from 00 01 to 98 99), in ascending order. <br><br>**Logic:** Loop two integers from 0 to 99. To print an integer like `4` as `04`, use modulo math: the first digit is `(n / 10) + '0'` and the second is `(n % 10) + '0'`. |
| **`ex07: ft_putnbr`** | **Recursion & Edge Cases:** Writing a function that displays any integer passed as a parameter. <br><br>**Logic:** This is a classic 42 rite of passage. If a number is negative, print `-` and multiply by `-1`. Use recursion or a loop dividing by `10` to isolate digits. The ultimate trap is the integer minimum limit (`INT_MIN`: `-2147483648`), which exceeds `INT_MAX` if multiplied by `-1`. It must be handled as a specific edge case. |
| **`ex08: ft_print_combn`** | **Backtracking:** Displaying all unique combinations of *n* distinct digits in ascending order. <br><br>**Logic:** Because *n* is dynamic (between 1 and 9), you cannot hardcode a set number of nested loops. This requires a recursive function (backtracking) and an array to store the current combination state before printing. |

---

## 🛠️ Instructions

### 🧪 Compilation & Testing (The Master Test)
Unlike Shell scripts, C programs must be compiled before they can be executed. Furthermore, these exercises strictly ask for functions, not complete programs. 

To make testing incredibly easy while avoiding "undefined reference" linker errors, the `tester.c` file in the root directory uses **C Preprocessor Macros** (`#ifdef`). This allows you to selectively compile and test only the exercises you want.

1. **Clone the repository:**
   ```bash
   git clone <your_repository_link>
   cd 42-Piscine/C-00
   ```

2. **Test a Single Exercise:**
   Pass the corresponding `-D EX**` flag to activate that specific test block inside `tester.c`.
   ```bash
   # Example for ex00:
   cc -Wall -Wextra -Werror -D EX00 tester.c ex00/ft_putchar.c -o test_ex00
   ./test_ex00
   ```

3. **Test Multiple Exercises Together:**
   You can chain multiple `-D` flags to test several functions at once, provided you include all their `.c` files in the command.
   ```bash
   # Example for ex00 and ex04:
   cc -Wall -Wextra -Werror -D EX00 -D EX04 tester.c ex00/ft_putchar.c ex04/ft_is_negative.c -o test_multiple
   ./test_multiple
   ```

> **⚠️ WARNING for 42 Students:** Do not push `tester.c` or any executable files to your final Moulinette repository! They are strictly for local testing purposes. Submitting unauthorized files will result in a 0.

### 🚨 The Norm
Moulinette relies on a program called `norminette` to check if your files comply with the Norm. Every single `.c` and `.h` file must pass. 

**The 42 Header:**
Before writing any code, every file must start with the standard 42 header. `norminette` will automatically fail any file missing this specific signature.
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:10:30 by maaugust          #+#    #+#             */
/*   Updated: 2025/02/20 13:55:54 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
```

Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 3 write` - Manual for the write system call.
* `man ascii` - The ASCII character table.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.
* [Official 42 Norminette Repository](https://github.com/42School/norminette) - The open-source linter enforcing the strict 42 coding standard.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation, enforcing the concept that learning is about developing the ability to find an answer, not just getting one directly.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
