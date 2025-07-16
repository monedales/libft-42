/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:13:11 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/16 14:25:23 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

size_t	ft_strlen(char *str);
int		ft_isalpha(int chr);
int		ft_isalnum(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
int		ft_isascii(int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);
void	*memset(void *str, int chr, size_t num);
void	ft_bzero(void *str, size_t num);

#endif