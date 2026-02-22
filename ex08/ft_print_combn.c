/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:07:04 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/22 22:59:45 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * @fn static void ft_recursive_comb(int n, int pos, char *arr)
 * @brief Recursively generates and prints combinations of digits.
 * @details Uses a backtracking algorithm to fill an array with strictly 
 * ascending digits. Once the array reaches length 'n', it prints the 
 * combination and steps backward to find the next valid set.
 * @param n The target length of the combination.
 * @param pos The current index being filled in the array.
 * @param arr The character array storing the current combination state.
 */
static void	ft_recursive_comb(int n, int pos, char *arr)
{
	char	start;

	if (pos == n)
	{
		write(1, arr, n);
		if (arr[0] != '9' - n + 1)
			write(1, ", ", 2);
		return ;
	}
	if (pos == 0)
		start = '0';
	else
		start = arr[pos - 1] + 1;
	while (start <= '9')
	{
		arr[pos] = start;
		ft_recursive_comb(n, pos + 1, arr);
		start++;
	}
}

/**
 * @fn void ft_print_combn(int n)
 * @brief Prints all unique combinations of 'n' distinct digits.
 * @details Acts as the entry point for the backtracking algorithm, ensuring 
 * 'n' is within the valid range (1-9) before initiating recursive generation.
 * @param n The number of digits in each combination (0 < n < 10).
 */
void	ft_print_combn(int n)
{
	char	arr[10];

	if (n > 0 && n < 10)
		ft_recursive_comb(n, 0, arr);
}
