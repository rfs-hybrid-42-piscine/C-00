# 🟢 Exercise 00: ft_putchar

## 📝 Objective
Write a function that displays the character passed as a parameter.

## 💡 The Logic
Because standard library functions like `printf` are strictly forbidden in this module, we must build our printing capabilities from the ground up using the system's `write` function from `<unistd.h>`.

The `write` function requires three arguments:
1. **File Descriptor:** `1` represents standard output (the terminal).
2. **Buffer:** The memory address of the character we want to print. We use the `&` (address-of) operator to get the memory address of our variable `c`.
3. **Count:** The number of bytes to write. A standard `char` is `1` byte.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   ```c
   #include <unistd.h>

   void ft_putchar(char c)
   {
       write(1, &c, 1);
   }
   ```

2. **Testing:**
   Use the master `tester.c` file provided in the root `C-00` directory to test this function.
   ```bash
   cc -Wall -Wextra -Werror ../tester.c ft_putchar.c -o test_putchar
   ./test_putchar
   ```
   *(Expected output: `Z`)*
