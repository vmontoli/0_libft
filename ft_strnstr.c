/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 07:53:42 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/16 08:05:06 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	first_pos_in_haystack;
	size_t	current_pos_in_needle;
	size_t	needle_len;

	first_pos_in_haystack = 0;
	current_pos_in_needle = 0;
	needle_len = ft_strlen(needle);
	while (first_pos_in_haystack <= (len - needle_len))
	{
		if (haystack[first_pos_in_haystack + current_pos_in_needle]
			!= needle[current_pos_in_needle])
		{
			first_pos_in_haystack++;
			current_pos_in_needle = 0;
		}
		else if (current_pos_in_needle <= needle_len - 1)
			current_pos_in_needle++;
		else
			return ((char *)haystack + first_pos_in_haystack);
	}
	return (NULL);
}
