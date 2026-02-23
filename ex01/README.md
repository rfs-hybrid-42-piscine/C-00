# 🟢 Exercise 01: ft_print_alphabet

## 📝 Objective
Create a function that displays the alphabet in lowercase, on a single line, in ascending order, starting from the letter 'a'.

## 💡 The Logic
In C, characters (`char`) are actually just integers under the hood, representing **ASCII values**. For example, the character `'a'` corresponds to the number `97`, and `'z'` corresponds to `122`.

Because they are just numbers, we can perform math on them! We can initialize a variable at `'a'` and use a `while` loop to repeatedly print the character and increment its value by 1 (`letter++`) until it reaches `'z'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_alphabet.c`](ft_print_alphabet.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX01` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX01 ../tester.c ft_print_alphabet.c -o test_ex01
   ./test_ex01
   ```
   *(Expected output: `abcdefghijklmnopqrstuvwxyz`)*
