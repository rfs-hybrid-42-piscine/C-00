# 🟢 Exercise 06: ft_print_comb2

## 📝 Objective
Create a function that displays all different combinations of two distinct two-digits numbers (XX XX) between 00 and 99, listed in ascending order.

## 💡 The Logic
Instead of managing four separate character variables, we can mathematically loop two integers, `a` and `b`, from `0` to `99`. The rule for uniqueness is the same: `b` must always start at `a + 1`.

Because we need to print integers like `4` as `04`, we must extract the tens and units places mathematically before converting them to ASCII characters.
* **Tens digit:** `(c / 10) + '0'` (e.g., 4 / 10 = 0)
* **Units digit:** `(c % 10) + '0'` (e.g., 4 % 10 = 4)

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_comb2.c`](ft_print_comb2.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX06` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX06 ../tester.c ft_print_comb2.c -o test_ex06
   ./test_ex06
   ```
   *(Expected output starts with `00 01, 00 02...` and ends with `...97 99, 98 99`)*
