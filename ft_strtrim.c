/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 08:15:41 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/16 08:43:29 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static bool	ft_char_is_in_str(char c, const char *s)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (true);
		s++;
	}
	return (false);
}

static char	*ft_strtrim_left(char const *s1, char const *set)
{
	while (*s1 != '\0')
	{
		if (!ft_char_is_in_str(*s1, set))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}

static char	*ft_strtrim_right(char const *s1, char const *set)
{
	while (!ft_char_is_in_str(*s1, set))
		s1--;
	return ((char *)s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*orig_start;
	char	*orig_end;
	size_t	len;
	char	*result;

	orig_start = ft_strtrim_left(s1, set);
	if (orig_start == NULL)
		return (NULL);
	orig_end = ft_strtrim_right(s1 + ft_strlen(s1), set);
	len = orig_end - orig_start + 1;
	result = malloc(len + 1);
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, orig_start, len + 1);
	return (result);
}
