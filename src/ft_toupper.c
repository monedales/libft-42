/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:13:54 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/15 19:28:47 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief converts a lowercase alphabetic character to an uppercase.
 *
 * This function checks if the given character c is a lowercase 
 * alphabetic character (a-z) and converts it to the corresponding 
 * uppercase letter (A-Z). If c is not a lowercase letter, it is 
 * returned unchanged.
 *
 * @param c The character to convert.
 * @return  The uppercase equivalent if c is lowercase, otherwise c unchanged.
 */
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int c = '\n';
// 	printf("%c\n", c);
// 	printf("%c\n", ft_toupper(c));
// 	return (0);
// }