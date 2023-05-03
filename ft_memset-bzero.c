/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset-bzero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:17:52 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/03 18:53:24 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	fill;
	size_t			i;

	ptr = (unsigned char *) b;
	fill = (unsigned char) c;
	i = 0;
	while (i < len)
		ptr[i++] = fill;
	return (b);
}

void	ft_bero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}