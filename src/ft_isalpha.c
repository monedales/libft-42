/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:21:46 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/14 21:20:03 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief [Breve descrição da função]
 *
 * [Descrição mais detalhada, se quiser]
 *
 * @param [nome] [descrição do parâmetro]
 * @param [nome] [descrição do parâmetro] (se tiver mais de um)
 * @return [descrição clara do retorno]
 */

size_t	ft_isalpha(char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		if (!((str[count] >= 'a' && str[count] <= 'z')
				|| (str[count] >= 'A' && str[count] <= 'Z')))
			return (0);
		count++;
	}
	return (1);
}

 #include <stdio.h>
 int	main(void)
 {
 	int	i;

 	i = ft_isalpha("oasdasdasdasdaaa");
 	printf("teste: %d\n", i);
 	return (0);
 }

