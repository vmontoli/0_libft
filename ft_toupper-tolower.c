/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper-tolower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:53:40 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/05 01:16:31 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*'à': 0xE0 'À': 0xC0
 *'ö': 0xF6 'Ö': 0xD6
 *'ø': 0xF8 'Ø': 0xD8
 *'þ': 0xFE 'Þ': 0xDE
 * */

int	ft_toupper(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 0xE0 && c <= 0xF6)
		|| (c >= 0xF8 && c <= 0xFE))
		return (c - 0x20);
	return (c);
}

int	ft_tolower(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 0xC0 && c <= 0xD6)
		|| (c >= 0xD8 && c <= 0xDE))
		return (c + 0x20);
	return (c);
}
