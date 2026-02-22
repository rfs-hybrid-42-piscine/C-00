/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 17:46:51 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:55:11 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn void ft_putnbr(int nb)
 * @brief Prints any valid integer to the standard output.
 * @details Handles the integer minimum edge case directly to prevent overflow. 
 * Converts negative numbers to positive, then recursively divides by 10 to 
 * isolate and print each individual digit.
 * @param nb The integer to print.
 */
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
}
