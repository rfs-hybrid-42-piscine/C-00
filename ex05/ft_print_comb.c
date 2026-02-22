/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 11:52:34 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:51:32 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn void ft_print_comb(void)
 * @brief Prints all unique combinations of three distinct digits.
 * @details Uses nested loops to generate ascending combinations of three 
 * digits (e.g., 012, 013... 789). Ensures no duplicate digits exist and 
 * handles comma separation appropriately.
 */
void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a != '7')
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
