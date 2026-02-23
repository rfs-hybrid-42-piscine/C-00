# 🟢 Exercise 08: ft_print_combn

## 📝 Objective
Create a function that displays all unique combinations of n distinct digits in ascending order, without repetition. The value of n will be between 0 and 10.

## 💡 The Logic
Because $n$ is dynamic (meaning it could be 2, 5, or 9), we cannot hardcode a specific number of `while` loops like we did in `ex05`. This requires a powerful algorithm called **Recursive Backtracking**.

1. We use an array to store the current combination state.
2. We pick a starting digit. The rule of ascending combinations dictates that the next digit must be at least one higher than the current digit (`start = arr[pos - 1] + 1`).
3. We move to the next position in the array (`pos + 1`) and call the function again.
4. **The Base Case:** When our position reaches $n$, the array is full. We print the array, then step backwards (backtrack), increment the previous digit, and try again until we hit `'9'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_combn.c`](ft_print_combn.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX08` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX08 ../tester.c ft_print_combn.c -o test_ex08
   ./test_ex08
   ```
