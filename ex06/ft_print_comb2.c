/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:23:52 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:57:30 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn static void ft_write_digits(char c)
 * @brief Helper function to format and print a single-digit or two-digit number.
 * @details Uses modulo and division by 10 to extract and print the tens and 
 * units places of a number, ensuring single digits are prefixed with a '0'.
 * @param c The number (0-99) to format and print.
 */
static void	ft_write_digits(char c)
{
	char	left_digit;
	char	right_digit;

	left_digit = (c / 10) + '0';
	right_digit = (c % 10) + '0';
	write(1, &left_digit, 1);
	write(1, &right_digit, 1);
}

/**
 * @fn void ft_print_comb2(void)
 * @brief Prints all unique combinations of two distinct two-digit numbers.
 * @details Uses nested loops to generate pairs of numbers from 00 to 99, 
 * printing them in ascending order separated by a space and a comma.
 */
void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write_digits(a);
			write (1, " ", 1);
			ft_write_digits(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
