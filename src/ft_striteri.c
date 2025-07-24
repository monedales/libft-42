/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:47:27 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/24 20:17:26 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
 * @brief Apply a function to each character of a string.
 *
 * Applies the function ’f’ to each character of the string passed as argument,
 * passing its index as the first argument. Each character is passed by address
 * to ’f’ so it can be modified if necessary.
 *
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * @return None.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	count;

	count = 0;
	while (s[count])
	{
		if (!s || !f)
			return ;
		f(count, &s[count]);
		count++;
	}
}
// char	touppereven(unsigned int i, char c)
// {
// 	if (i % 2 && c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
// char	mask_vowels(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
// 		c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
// 		return ('*');
// 	return (c);
// }

// int	main(void)
// {
// 	char *str = "my lib, my rules.";
// 	void *result = ft_striteri(str, touppereven);
// 	char *result2 = ft_striteri(str, mask_vowels);

// 	printf("Original: %s\n", str);
// 	printf("Result:   %s\n", result);
// 	printf("Result2:   %s\n", result2);
// 	free(result);

// 	return (0);
// }