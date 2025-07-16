/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 18:57:46 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/15 19:05:08 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief checks whether a character is printable.
 *
 * This function checks if the given character c is
 * a printable one (ASCII values from 32 to 126).
 *
 * @param c The character to check.
 * @return Non-zero if c is printable, zero otherwise.
 */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
