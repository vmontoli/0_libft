/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:18:21 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/09 19:58:14 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*ft_itoa_unsigned(unsigned int n, int pos)
{
	char	*ptr;

	if (n >= 10)
		ptr = ft_itoa_unsigned(n / 10, pos + 1);
	else
	{
		ptr = (char *) malloc(pos + 2);
		if (ptr != NULL)
			ptr[pos + 1] = '\0';
	}
	if (ptr != NULL)
		ptr[pos] = (n % 10) + '0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;

	if (n < 0)
	{
		ptr = ft_itoa_unsigned((unsigned int) -n, 1);
		if (ptr != NULL)
			ptr[0] = '-';
	}
	else
		ptr = ft_itoa_unsigned((unsigned int) n, 0);
	return (ptr);
}
