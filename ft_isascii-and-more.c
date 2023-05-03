/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD:ft_isascii-and-more.c
/*   ft_isascii-and-more.c                              :+:      :+:    :+:   */
=======
/*   ft_is-characters.c                                 :+:      :+:    :+:   */
>>>>>>> a4be0084a916f262253c863c0c35a478631cf921:ft_is-characters.c
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:26:17 by vmontoli          #+#    #+#             */
<<<<<<< HEAD:ft_isascii-and-more.c
/*   Updated: 2023/05/03 16:37:44 by vmontoli         ###   ########.fr       */
=======
/*   Updated: 2023/05/03 16:26:40 by vmontoli         ###   ########.fr       */
>>>>>>> a4be0084a916f262253c863c0c35a478631cf921:ft_is-characters.c
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

int	ft_isdigit(int c)
{
	return (c >= '0' || c <= '9');
}

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
