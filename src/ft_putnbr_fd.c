/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:02:00 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/23 20:20:32 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Prints an integer to the specified file descriptor.
 *
 * Outputs the integer ’n’ to the specified file descriptor.
 *
 * @param n The integer to output.
 * @param fd The file descriptor on which to write.
 * @return None.
 */
void	ft_putnbr_fd(int n, int fd)
{
	int	div;
	int	digit;
	int	int_min;

	int_min = -2147483648;
	if (n == int_min)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	div = (n / 10);
	digit = (n % 10) + 48;
	if (div > 0)
		ft_putnbr_fd(div, fd);
	ft_putchar_fd(digit, fd);
}
// int	main(void)
// {
// 	ft_putnbr_fd(0, 1);
// 	return (0);
// }