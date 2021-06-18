/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asorrent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/18 08:39:33 by asorrent          #+#    #+#             */
/*   Updated: 2021/06/18 14:35:52 by asorrent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*dst;

	(void) del;
	if (!lst || !f)
		return (NULL);
	dst = (ft_lstnew(f(lst->content)));
	head = dst;
	lst = lst->next;
	while (lst)
	{
		dst->next = (ft_lstnew(f(lst->content)));
		dst = dst->next;
		if (!lst->next)
			return (head);
		lst = lst->next;
	}
	return (head);
}
