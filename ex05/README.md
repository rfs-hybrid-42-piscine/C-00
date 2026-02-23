# 🟢 Exercise 05: ft_print_comb

## 📝 Objective
Create a function that displays all unique combinations of three distinct digits, with both the digits within each combination and the combinations themselves in ascending order.

## 💡 The Logic
This exercise introduces **Nested Loops**. To print three digits, we need three variables (`a`, `b`, and `c`), each running their own loop. 

To ensure the digits are strictly ascending (and thus unique), the inner loops must always start one digit higher than their parent loop. 
* `a` starts at `'0'` and goes to `'7'`
* `b` always starts at `a + 1` and goes to `'8'`
* `c` always starts at `b + 1` and goes to `'9'`

This perfectly avoids invalid combinations like `102` (not ascending) or `022` (not distinct). Finally, we use `if (a != '7')` to prevent printing a trailing comma after the final combination (`789`).

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_comb.c`](ft_print_comb.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX05` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX05 ../tester.c ft_print_comb.c -o test_ex05
   ./test_ex05
   ```
   *(Expected output starts with `012, 013...` and ends with `...788, 789`)*
