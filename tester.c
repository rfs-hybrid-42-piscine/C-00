/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:05:22 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 23:05:27 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* --- Prototypes --- */
void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);
void	ft_print_comb2(void);
void	ft_putnbr(int nb);
void	ft_print_combn(int n);

/* --- Main Testing Function --- */
int	main(void)
{
	printf("--- EX00: ft_putchar ('Z') ---\n");
	ft_putchar('Z');
	printf("\n");

	printf("\n--- EX01: ft_print_alphabet ---\n");
	ft_print_alphabet();
	printf("\n");

	printf("\n--- EX02: ft_print_reverse_alphabet ---\n");
	ft_print_reverse_alphabet();
	printf("\n");

	printf("\n--- EX03: ft_print_numbers ---\n");
	ft_print_numbers();
	printf("\n");

	printf("\n--- EX04: ft_is_negative ---\n");
	printf("-5: ");
	ft_is_negative(-5);
	printf("\n 0: ");
	ft_is_negative(0);
	printf("\n 5: ");
	ft_is_negative(5);
	printf("\n");

	printf("\n--- EX05: ft_print_comb ---\n");
	ft_print_comb();
	printf("\n");

	printf("\n--- EX06: ft_print_comb2 ---\n");
	ft_print_comb2();
	printf("\n");

	printf("\n--- EX07: ft_putnbr ---\n");
	printf("      42: ");
	ft_putnbr(42);
	printf("\n     -42: ");
	ft_putnbr(-42);
	printf("\n       0: ");
	ft_putnbr(0);
	printf("\n INT_MAX: ");
	ft_putnbr(2147483647);
	printf("\n INT_MIN: ");
	ft_putnbr(-2147483648);
	printf("\n");

	printf("\n--- EX08: ft_print_combn (n = 2) ---\n");
	ft_print_combn(2);
	printf("\n");

	printf("\n--- EX08: ft_print_combn (n = 9) ---\n");
	ft_print_combn(9);
	printf("\n\n");

	return (0);
}
