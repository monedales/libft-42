/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:21:46 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/15 19:04:42 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief checks whether a character is alphabetic.
 *
 * The function checks if the given character c is an
 * alphabetic character, either uppercase or lowercase.
 *
 * @param c The character to be checked.
 * @return the values returned are nonzero if the character 
 * c falls into an alphabetic character, zero otherwise.
 */
int	ft_isalpha(int c)
{
	if (!((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')))
		return (0);
	else
		return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_isalpha('a'));
//  	return (0);
// }
