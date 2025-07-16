/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 19:50:02 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/15 20:51:00 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *str, int c, size_t num)
{
	unsigned char	u_char;
	unsigned char	*ptr;
	size_t			count;

	count = 0;
	ptr = (unsigned char *)str;
	u_char = (unsigned char)c;
	while (count < num)
	{
		ptr[count] = u_char;
		count++;
	}
	return (str);
}
