# 🟢 Exercise 01: ft_print_alphabet

## 📝 Objective
Create a function that displays the alphabet in lowercase, on a single line, in ascending order, starting from the letter 'a'.

## 💡 The Logic
In C, characters (`char`) are actually just integers under the hood, representing **ASCII values**. For example, the character `'a'` corresponds to the number `97`, and `'z'` corresponds to `122`.

Because they are just numbers, we can perform math on them! We can initialize a variable at `'a'` and use a `while` loop to repeatedly print the character and increment its value by 1 (`letter++`) until it reaches `'z'`.

## 🛠️ Step-by-Step Solution

1. **The Code:**
   ```c
   #include <unistd.h>

   void ft_print_alphabet(void)
   {
       char letter;

       letter = 'a';
       while (letter <= 'z')
       {
           write(1, &letter, 1);
           letter++;
       }
   }
   ```

2. **Testing:**
   ```bash
   cc -Wall -Wextra -Werror ../tester.c ft_print_alphabet.c -o test_alphabet
   ./test_alphabet
   ```
   *(Expected output: `abcdefghijklmnopqrstuvwxyz`)*
