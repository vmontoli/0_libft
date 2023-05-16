/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:18:21 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/16 05:40:57 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_itoa_fill_positive(unsigned int n, char *ptr, size_t pos)
{
	ptr[pos] = n % 10 + '0';
	if (n >= 10)
		ft_itoa_fill_positive(n / 10, ptr, pos - 1);
}

static size_t	ft_itoa_positive_len(unsigned int n)
{
	size_t	i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static unsigned int	ft_unsigned_abs(int n)
{
	if (n < 0)
		return ((unsigned int) -n);
	return ((unsigned int) n);
}

char	*ft_itoa(int n)
{
	bool			neg;
	unsigned int	positive_n;
	size_t			positive_len;
	char			*ptr;

	neg = n < 0;
	positive_n = ft_unsigned_abs(n);
	positive_len = ft_itoa_positive_len(positive_n);
	ptr = malloc(positive_len + neg + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[positive_len + neg] = '\0';
	if (neg)
		ptr[0] = '-';
	ft_itoa_fill_positive(positive_n, ptr + neg, positive_len - 1);
	return (ptr);
}
