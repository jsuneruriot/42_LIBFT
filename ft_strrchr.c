/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:50:43 by juriot            #+#    #+#             */
/*   Updated: 2018/11/15 18:50:45 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen((char *)s);
	if ((char)c == '\0')
	{
		return (&((char*)s)[i]);
	}
	while (i >= 0)
	{
		if (((char *)s)[i] == (char)c)
			return (&((char*)s)[i]);
		i--;
	}
	return (0);
}
