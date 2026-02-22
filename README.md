*This project has been created as part of the 42 curriculum by maaugust.*

<div align="center">
  <img src="https://raw.githubusercontent.com/rfs-hybrid/42-Piscine/main/assets/covers/cover-c00.png" alt="C 00 Cover" width="100%" />
</div>

<div align="center">
  <h1>💻 C 00: Introduction to C Programming</h1>
  <img src="https://img.shields.io/badge/Language-C-blue" alt="Language badge" />
  <img src="https://img.shields.io/badge/Grade-100%2F100-success" />
  <img src="https://img.shields.io/badge/Norminette-Passing-success" alt="Norminette badge" />
</div>

---

## 💡 Description
**C 00** is the first purely programming-focused module of the C Piscine @ 42. It serves as the foundation for the rest of the curriculum.

The primary goal of this project is to introduce the strict **42 Norm**, basic C syntax, loops, conditional statements, and ASCII math. Furthermore, it introduces the severe standard library restrictions: you are generally only allowed to use the `write` function from `<unistd.h>`. You must build everything else—from printing numbers to formatting strings—completely from scratch.

---

## 🧠 Exercise Breakdown & Logic

*The following section explains the core concepts required to solve each exercise. It focuses on the fundamental logic of C programming, emphasizing manual memory manipulation and ASCII character values.*

### 🔹 The Basics (ASCII & Write)
| Exercise | Concept & Logic |
| :--- | :--- |
| **`ex00: ft_putchar`** | **The Foundation:** Creating a wrapper function for the system's `write` call. <br><br>**Logic:** The standard `printf` is forbidden. To print anything to the standard output (terminal), we must use `write(1, &c, 1)`, passing the file descriptor `1`, the memory address of the character `&c`, and the number of bytes `1`. |
| **`ex01: ft_print_alphabet`** | **Loops & ASCII:** Printing the alphabet using a single loop. <br><br>**Logic:** In C, characters are just integers representing ASCII values. 'a' is `97` and 'z' is `122`. We can use a `while` loop starting at 'a' and incrementing the character by `1` until it reaches 'z'. |
| **`ex02: ft_print_reverse_alphabet`** | **Decrementing Loops:** Printing the alphabet backwards. <br><br>**Logic:** The exact same logic as `ex01`, but initializing the variable at 'z' and using the decrement operator (`--`) until it reaches 'a'. |
| **`ex03: ft_print_numbers`** | **Character vs Integer:** Printing digits 0 through 9. <br><br>**Logic:** We loop from the *character* '0' (ASCII 48) to the character '9' (ASCII 57). It is crucial to understand that printing the integer `0` using `write` will not output the number "0", but rather the ASCII null character. |
| **`ex04: ft_is_negative`** | **Conditionals:** Checking the sign of a passed integer. <br><br>**Logic:** A simple introduction to `if/else` statements. If the integer `n < 0`, write 'N'. Otherwise, write 'P'. |

### 🚀 Advanced Logic & Formatting (Optional)
| Exercise | Concept & Logic |
| :--- | :--- |
| **`ex05: ft_print_comb`** | **Nested Loops:** Printing all unique combinations of three different digits in ascending order. <br><br>**Logic:** Requires three nested `while` loops. The key to ensuring the combinations are unique and ascending (e.g., printing `012` but skipping `102` or `022`) is initializing the second loop's counter to `i + 1`, and the third loop's counter to `j + 1`. |
| **`ex06: ft_print_comb2`** | **Formatting & Math:** Printing all combinations of two two-digit numbers (00 01 to 98 99). <br><br>**Logic:** Instead of characters, loop two integers from 0 to 99. To print an integer like `4` as `04`, use modulo math: the first digit is `(n / 10) + '0'` and the second is `(n % 10) + '0'`. |
| **`ex07: ft_putnbr`** | **Recursion & Edge Cases:** Writing a function that prints *any* integer, simulating `printf("%d")`. <br><br>**Logic:** This is a classic 42 rite of passage. If a number is negative, print `-` and multiply by `-1`. Use recursion or a loop dividing by `10` to isolate digits. The ultimate trap is the integer minimum limit (`INT_MIN`: `-2147483648`), which cannot simply be multiplied by `-1` because it exceeds the `INT_MAX` limit. It must be handled as a special edge case. |
| **`ex08: ft_print_combn`** | **Backtracking:** Printing all unique combinations of *n* digits. <br><br>**Logic:** Because *n* is dynamic (between 1 and 9), you cannot hardcode a set number of nested loops. This requires a recursive function (backtracking) and an array to store the current combination state before printing. |

---

## 🛠️ Instructions

### 📦 Compilation & Testing
Unlike Shell scripts, C programs must be compiled before they can be executed. Furthermore, these exercises strictly ask for functions, not complete programs. **You must write your own `main.c` files to test them.**

1. **Clone the repository:**
   ```bash
   git clone <your_repository_link>
   cd 42-Piscine/C00
   ```

2. **Test a function (Example for `ex00`):**
   Create a `main.c` file inside the exercise folder to call the function:
   ```c
   // main.c
   void ft_putchar(char c);

   int main(void)
   {
       ft_putchar('Z');
       return (0);
   }
   ```

3. **Compile with strict flags:**
   The 42 standard requires compiling with `-Wall`, `-Wextra`, and `-Werror` to ensure no warnings or hidden bugs exist.
   ```bash
   gcc -Wall -Wextra -Werror ft_putchar.c main.c -o test_putchar
   ```

4. **Execute:**
   ```bash
   ./test_putchar
   ```

### 🚨 Norminette
Every `.c` file must pass the 42 Norm check. Run the following command before pushing:
```bash
norminette -R CheckForbiddenSourceHeader <file.c>
```

---

## 📚 Resources & References

* `man 3 write` - Manual for the write system call.
* `man ascii` - The ASCII character table.
* [42 Norm V4](https://cdn.intra.42.fr/pdf/pdf/96987/en.norm.pdf) - The strict coding standard for 42 C projects.

### 🤖 AI Usage Guidelines
* **Code:** No AI-generated code was used to solve these exercises. All C functions were built manually to strictly comply with the 42 Norm and deeply understand manual memory manipulation.
* **Documentation:** AI tools were utilized to structure this `README.md` and format the logic breakdowns to create a clean, accessible educational resource for fellow 42 students.
