# 🟢 Exercise 04: ft_is_negative

## 📝 Objective
Create a function that displays 'N' or 'P' depending on the sign of the integer passed as a parameter. If n is negative, display 'N'. If n is positive or zero, display 'P'.

## 💡 The Logic
This is an introduction to **Conditional Statements** (`if / else`) and control flow. 
We simply evaluate the mathematical value of the integer `n`. If the condition `n < 0` is true, the program enters the first block and prints 'N'. Otherwise, it defaults to the `else` block and prints 'P'.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_is_negative.c`](ft_is_negative.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX04` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX04 ../tester.c ft_is_negative.c -o test_ex04
   ./test_ex04
   ```
   *(Expected output for -5, 0, and 5: `N P P`)*
