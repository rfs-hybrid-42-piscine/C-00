# 🟢 Exercise 02: ft_print_reverse_alphabet

## 📝 Objective
Create a function that displays the alphabet in lowercase, on a single line, in descending order, starting from the letter 'z'.

## 💡 The Logic
This uses the exact same ASCII math logic as `ex01`. However, instead of starting at `'a'` (97) and incrementing, we initialize our character variable at `'z'` (122). 

We then use a `while` loop and the decrement operator (`letter--`) to subtract 1 from the ASCII value on each loop until it reaches `'a'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   *Check out the source file here:* **[`ft_print_reverse_alphabet.c`](ft_print_reverse_alphabet.c)**

2. **Testing:**
   Use the master **[`tester.c`](../tester.c)** file provided in the root `C-00` directory. You must pass the `-D EX02` flag to the compiler to selectively activate the test for this specific exercise!
   ```bash
   cc -Wall -Wextra -Werror -D EX02 ../tester.c ft_print_reverse_alphabet.c -o test_ex02
   ./test_ex02
   ```
   *(Expected output: `zyxwvutsrqponmlkjihgfedcba`)*
