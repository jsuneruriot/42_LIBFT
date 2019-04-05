/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 14:41:38 by juriot            #+#    #+#             */
/*   Updated: 2018/11/27 14:41:40 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*lst;
	t_list	*tmp;

	lst = *alst;
	if (alst == NULL)
		return ;
	if (del != NULL)
	{
		while (lst != NULL)
		{
			tmp = lst->next;
			ft_lstdelone(&lst, del);
			lst = tmp;
		}
	}
	*alst = NULL;
}
