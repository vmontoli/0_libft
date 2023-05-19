/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy-memmove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:39:41 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/19 23:09:43 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_curr;
	char	*src_curr;
	size_t	bytes_copied;

	if (dst == NULL || src == NULL)
		return (dst);
	dst_curr = (char *) dst;
	src_curr = (char *) src;
	bytes_copied = 0;
	while (bytes_copied < n)
	{
		*(dst_curr++) = *(src_curr++);
		bytes_copied++;
	}
	return (dst);
}
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	return (ft_memmove(dst, src, n));
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_curr;
	char	*src_curr;
	size_t	bytes_copied;

	dst_curr = (char *) dst;
	src_curr = (char *) src;
	bytes_copied = 0;
	while (bytes_copied < len && dst_curr != src && src_curr != dst)
	{
		*(dst_curr++) = *(src_curr++);
		bytes_copied++;
	}
	return (dst);
}
