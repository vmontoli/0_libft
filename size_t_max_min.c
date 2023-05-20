/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size_t_max_min.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 04:00:21 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/20 04:01:58 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	size_t_max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

size_t	size_t_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
