/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy-memmove.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:39:41 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/03 18:53:09 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_curr;
	char	*src_curr;
	size_t	n_left;

	dst_curr = (char *) dst;
	src_curr = (char *) src;
	n_left = n;
	while (n_left > 0)
	{
		*dst_curr++ = *src_curr++;
		n_left--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_curr;
	char	*src_curr;
	size_t	n_left;

	dst_curr = (char *) dst;
	src_curr = (char *) src;
	n_left = len;
	while (n_left > 0 && dst_curr != src && src_curr != dst)
	{
		*dst_curr++ = *src_curr++;
		n_left--;
	}
	return (dst);
}
