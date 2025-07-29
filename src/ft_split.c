/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:24:16 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/29 17:50:04 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	len;
	size_t	count;
	size_t	count_w;
	size_t	start;

	len = count_words(s, c);
	arr = ft_calloc(len + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	count = 0;
	count_w = 0;
	while (s[count])
	{
		while (s[count] && s[count] != c)
			count++;
		if ()
	}
	
	return(arr);
}

static char	*extract_word(const char *word, char chr, size_t start)
{
	size_t	current;
	char	*sub;

	current = start;
	while (word[current] && word[current] != chr)
		current++;
	sub = ft_substr(word, start, current - start);
	return (sub);
}

static size_t	count_words(const char *str, char delimit)
{
	size_t	len;
	size_t	count;

	len = 0;
	count = 0;
	while (str[count])
	{
		while (str[count] == delimit)
			count++;
		if (str[count])
		{
			len++;
			while (str[count] != delimit && str[count])
				count++;
		}
	}
	return (len);
}
int	main(void)
{
	char *str = "  hello  world  split ";
	
	printf("words: %ld\n", count_words(str, ' '));
	return (0);
}