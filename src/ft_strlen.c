/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:37:26 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/14 20:14:23 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Computes the length of a null-terminated string.
 *
 * Counts the number of characters in the string until the null terminator.
 *
 * @param str The string whose length will be calculated.
 * @return The number of characters in the string, excluding the null terminator.
 */

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
