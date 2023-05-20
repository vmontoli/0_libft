/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmontoli <vmontoli@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 20:18:21 by vmontoli          #+#    #+#             */
/*   Updated: 2023/05/21 00:12:04 by vmontoli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static t_list	*ft_lstclear_nullify(t_list *lst, void (*del)(void *))
{
	ft_lstclear(&lst, del);
	return (NULL);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*mine_curr;
	t_list	*orig_curr;

	res = ft_lstnew(f(lst->content));
	if (res == NULL)
		return (NULL);
	mine_curr = res;
	orig_curr = lst;
	while (orig_curr->next != NULL)
	{
		mine_curr->next = ft_lstnew(f(lst->content));
		if (mine_curr->next == NULL)
			return (ft_lstclear_nullify(res, del));
		orig_curr = orig_curr->next;
		mine_curr = mine_curr->next;
	}
	return (res);
}
