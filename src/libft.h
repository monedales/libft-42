/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maria-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:13:11 by maria-ol          #+#    #+#             */
/*   Updated: 2025/07/25 20:26:45 by maria-ol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

size_t	ft_strlen(const char *str);
int		ft_isalpha(int chr);
int		ft_isalnum(int chr);
int		ft_isdigit(int chr);
int		ft_isprint(int chr);
int		ft_isascii(int chr);
int		ft_tolower(int chr);
int		ft_toupper(int chr);
void	*ft_memset(void *str, int chr, size_t num);
void	ft_bzero(void *str, size_t num);
void	*ft_memcpy(void *dest, const void *src, size_t num);
void	*ft_memmove(void *dest, const void *src, size_t num);
void	*ft_memchr(const void *src, int chr, size_t num);
int		ft_memcmp(const void *s1, const void *s2, size_t num);
int		ft_strncmp(const char *s1, const char *s2, size_t num);
char	*ft_strchr(const char *str, int chr);
char	*ft_strrchr(const char *str, int chr);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t amount, size_t bytes_size);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putendl_fd(char *str, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);

#endif