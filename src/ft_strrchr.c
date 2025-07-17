/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 18:32:36 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/17 19:21:26 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *str, int chr)
{
	char	uchr;
	size_t		count;

	count = ft_strlen(str);
	uchr = (char)chr;
	while (str[count] >= 0)
	{
		if (str[count] == uchr)
			return ((char *)&str[count]);
		count--;
	}
	if (uchr == '\0')
		return ((char *)&str[count]);
	return (NULL);
}

int	main(void)
{
	char str[] = "hi honey";
	printf("FAKE: %s\n", ft_strrchr(str, 'h'));
	// printf("ORIGINAL: %s", strrchr(str, 'h'));
	return (0);
}