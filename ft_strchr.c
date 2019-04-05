/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 18:38:15 by juriot            #+#    #+#             */
/*   Updated: 2018/11/15 18:38:17 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (((char *)s)[i] != '\0')
	{
		if (((char *)s)[i] == (char)c)
			return (&((char*)s)[i]);
		i++;
	}
	if ((char)c == '\0')
	{
		i = ft_strlen((char*)s);
		return (&((char*)s)[i]);
	}
	return (0);
}
