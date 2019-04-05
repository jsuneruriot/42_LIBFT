/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 16:24:04 by juriot            #+#    #+#             */
/*   Updated: 2018/11/27 16:24:07 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;
	t_list	*rendu;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = f(lst);
	if ((rendu = ft_lstnew(new->content, new->content_size)))
	{
		tmp = rendu;
		lst = lst->next;
		while (lst != NULL)
		{
			new = f(lst);
			if (!(tmp->next = ft_lstnew(new->content, new->content_size)))
				return (NULL);
			tmp = tmp->next;
			lst = lst->next;
		}
	}
	return (rendu);
}
