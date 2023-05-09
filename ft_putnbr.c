/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:59:13 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/09 18:44:45 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	current;

	current = (n % 10) + '0';
	if (n >= 10)
		ft_putnbr_unsigned_fd((n / 10), fd);
	ft_putchar_fd(current, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	positive_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		positive_n = (unsigned int) -n;
	}
	else
		positive_n = (unsigned int) n;
	ft_putnbr_unsigned_fd(positive_n, fd);
}
