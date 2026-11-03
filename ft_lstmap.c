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
	t_list	*new;
	t_list	*begin;

	if (!lst || !f || !del)
		return (0);
	begin = malloc(sizeof(t_list));
	if (!begin)
		return (0);
	begin->content = f(lst->content);
	new = begin;
	lst = lst->next;
	while (lst)
	{
		new->next = malloc(sizeof(t_list));
		if (!new->next)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		new = new->next;
		new->content = f(lst->content);
		lst = lst->next;
	}
	new->next = 0;
	return (begin);
}
