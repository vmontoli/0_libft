/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri-strmapi.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:26:30 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/16 06:05:47 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;

	if (s == NULL || f == NULL)
		return (NULL);
	result = ft_strdup(s);
	if (result == NULL)
		return (NULL);
	ft_striteri(result, f);
}
