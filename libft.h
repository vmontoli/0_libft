/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:21:57 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/16 06:29:10 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Definition of size_t (and NULL):
 * There are only variables and macros (not forbidden),
 *  no external functions (forbidden) */
# include <stddef.h>

//Definition of bool (instead of _Bool), true, false)
# include <stdbool.h>

/*
 * # include <sys/errno.h>
 * //EINVAL: Invalid argument
 * //ENOMEM: Cannot allocate memory (from malloc())
*/

/* PART 1 */

/*ft_isascii-more.c*/
// w/ full test PASSED
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);

/*ft_toupper-tolower.c*/
// w/ full test PASSED
int		ft_toupper(int c);
int		ft_tolower(int c);

/*ft_isupper-islower.c*/
// w/ full test PASSED
// added for convenience, used for ft_isascii() & ft_toupper/lower()
int		ft_isupper(int c);
int		ft_islower(int c);

/*ft_strlen.c*/
size_t	ft_strlen(const char *s);

/*ft_memset-bzero.c*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);

/*ft_memcpy-memmove.c*/
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

/*ft_strlcpy-stlcat.c*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*TODO*/
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *s, int c, size_t n);

/*TODO*/
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

/*TODO*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

/*ft_atoi.c*/
int		ft_atoi(const char *str);

/*ft_calloc.c*/
void	*ft_calloc(size_t count, size_t size);
			/*with malloc() [#include <stdlib.h> on its file]*/

/*ft_strdup.c*/
char	*ft_strdup(const char *s1);
			/*with malloc() [#include <stdlib.h> on its file]*/

/* PART 2 */

/*TODO*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
			/*with malloc() [#include <stdlib.h> on its file]*/

/*TODO*/
char	*ft_strjoin(char const *s1, char const *s2);
			/*with malloc() [#include <stdlib.h> on its file]*/

/*TODO*/
char	*ft_strtrim(char const *s1, char const *set);
			/*with malloc() [#include <stdlib.h> on its file]*/

/*TODO*/
char	**ft_split(char const *s, char c);
			/*with malloc() & free() [#include <stdlib.h> on its file]*/

/*ft_itoa.c*/
// w/ partial test PASSED
char	*ft_itoa(int n);
			/*with malloc() [#include <stdlib.h> on its file]*/

/*ft_striteri-strmapi.c*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
			/*with malloc() [#include <stdlib.h> on its file]*/
			/*ft_strdup() used instead*/

/*ft_putstr-more.c*/
void	ft_putchar_fd(char c, int fd);
			/*with write() [#include <unistd.h> on its file]*/
void	ft_putstr_fd(char *s, int fd);
			/*with write() [#include <unistd.h> on its file]*/
void	ft_putendl_fd(char *s, int fd);
			/*with write() [#include <unistd.h> on its file]*/
			/*ft_putchar_fd() used instead*/

/*ft_putnbr.c*/
void	ft_putnbr_fd(int n, int fd);
			/*with write() [#include <unistd.h> on its file]*/
			/*ft_putchar_fd() used instead*/

#endif
