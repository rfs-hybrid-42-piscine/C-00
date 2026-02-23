/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:05:22 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 00:38:04 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* --- Master Switch --- */
#ifdef TEST_ALL
# define EX00
# define EX01
# define EX02
# define EX03
# define EX04
# define EX05
# define EX06
# define EX07
# define EX08
#endif

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
#ifdef EX00
	printf("--- EX00: ft_putchar ('Z') ---\n");
	ft_putchar('Z');
	printf("\n\n");
#endif

#ifdef EX01
	printf("--- EX01: ft_print_alphabet ---\n");
	ft_print_alphabet();
	printf("\n\n");
#endif

#ifdef EX02
	printf("--- EX02: ft_print_reverse_alphabet ---\n");
	ft_print_reverse_alphabet();
	printf("\n\n");
#endif

#ifdef EX03
	printf("--- EX03: ft_print_numbers ---\n");
	ft_print_numbers();
	printf("\n\n");
#endif

#ifdef EX04
	printf("--- EX04: ft_is_negative ---\n");
	printf("-5: ");
	ft_is_negative(-5);
	printf("\n 0: ");
	ft_is_negative(0);
	printf("\n 5: ");
	ft_is_negative(5);
	printf("\n\n");
#endif

#ifdef EX05
	printf("--- EX05: ft_print_comb ---\n");
	ft_print_comb();
	printf("\n\n");
#endif

#ifdef EX06
	printf("--- EX06: ft_print_comb2 ---\n");
	ft_print_comb2();
	printf("\n\n");
#endif

#ifdef EX07
	printf("--- EX07: ft_putnbr ---\n");
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
	printf("\n\n");
#endif

#ifdef EX08
	printf("--- EX08: ft_print_combn (n = 2) ---\n");
	ft_print_combn(2);
	printf("\n\n");

	printf("--- EX08: ft_print_combn (n = 9) ---\n");
	ft_print_combn(9);
	printf("\n\n");
#endif

	return (0);
}
