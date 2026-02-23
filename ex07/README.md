# 🟢 Exercise 07: ft_putnbr

## 📝 Objective
Create a function that displays the number passed as a parameter. The function must be able to display all possible values of an int type variable.

## 💡 The Logic
This exercise introduces **Recursion** and forces you to handle **Undefined Behavior / Edge Cases**. 

You cannot simply convert an integer to a string in C. You must peel off one digit at a time.
1. **The Edge Case (`INT_MIN`):** The minimum value of a standard `int` is `-2147483648`. If you multiply this by `-1` to make it positive, it overflows the maximum limit (`2147483647`). We must check for this exact value first and print it directly to avoid a crash.
2. **Negatives:** If the number is negative, print a `-` and convert the number to positive (`nb = -nb`).
3. **Recursion:** If the number is greater than or equal to 10, we call `ft_putnbr(nb / 10)`. This slices off the last digit and sends the remaining numbers deeper into the recursion stack until only one digit is left.
4. **Printing:** As the recursion "unwinds", we print the last digit using modulo: `(nb % 10) + '0'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_putnbr.c`](ft_putnbr.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX07` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX07 ../tester.c ft_putnbr.c -o test_ex07
   ./test_ex07
   ```
   *(Ensure it prints 42, -42, 0, INT_MAX, and INT_MIN correctly).*
