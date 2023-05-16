/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:09:53 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/16 06:32:23 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	n_bytes;
	char	*ptr;

	if (s1 == NULL)
		return (NULL);
	n_bytes = ft_strlen(s1) + 1;
	ptr = (char *) malloc(n_bytes);
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s1, n_bytes);
	return (ptr);
}
