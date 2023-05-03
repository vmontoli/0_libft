/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:21:57 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/03 18:42:41 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Definition of size_t (and NULL):
 * They are only variables and macros (not forbidden),
 *  no external functions (forbidden) */
# include <stddef.h>

/* PART 1 */

int		ft_isalpha(int c); /*ft_isascii-and-more.c*/
int		ft_isdigit(int c); /*ft_isascii-and-more.c*/
int		ft_isalnum(int c); /*ft_isascii-and-more.c*/
int		ft_isascii(int c); /*ft_isascii-and-more.c*/
int		ft_isprint(int c); /*ft_isascii-and-more.c*/
size_t	ft_strlen(const char *s); /*ft_strlen.c*/
void	*ft_memset(void *b, int c, size_t len); /*ft_memset-and-bzero.c*/
void	ft_bzero(void *s, size_t n); /*ft_memset-and-bzero.c*/
void	*ft_memcpy(void *dst, const void *src, size_t n);/*ft_memcpy-and-memmo*/
void	*ft_memmove(void *dst, const void *src, size_t len);/*ft_memcpy-and-mo*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);

/* PART 1 with malloc() [#include <stdlib.h> on their own files] */

void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);

/* PART 2 */

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
