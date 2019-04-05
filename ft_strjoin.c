/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:15:03 by juriot            #+#    #+#             */
/*   Updated: 2018/11/16 18:15:04 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	if (!(str = ft_strnew(len)))
		return (0);
	ft_strcpy(str, (char*)s1);
	ft_strcat(str, (char*)s2);
	return (str);
}
