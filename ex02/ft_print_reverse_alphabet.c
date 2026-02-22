/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:54:58 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:51:06 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn void ft_print_reverse_alphabet(void)
 * @brief Prints the lowercase alphabet in descending order.
 * @details Iterates backwards from 'z' to 'a' using a while loop and writes 
 * each character sequentially to the standard output.
 */
void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter >= 'a')
	{
		write(1, &letter, 1);
		letter--;
	}
}
