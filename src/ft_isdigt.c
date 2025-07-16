/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:53:19 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/15 19:04:27 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief checks whether a character is a decimal digit.
 *
 * The function checks if the given character c is a
 * numeric digit(0 through 9).
 *
 * @param c The character to be checked.
 * @return the values returned are nonzero if the character 
 * c is a digit, zero otherwise.
 */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
