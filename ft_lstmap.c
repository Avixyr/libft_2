/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artbaudo <artbaudo@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 12:05:48 by artbaudo          #+#    #+#             */
/*   Updated: 2026/11/03 12:05:48 by artbaudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*first;

	first = 0;
	while (lst)
	{
		l = malloc(sizeof(*l));
		if (!l)
		{
			ft_lstclear(&first, del);
			return (0);
		}
		l->content = f(lst->content);
		l->next = 0;
		ft_lstadd_back(&first, l);
		lst = lst->next;
	}
	return (first);
}
