/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:39:24 by juriot            #+#    #+#             */
/*   Updated: 2018/11/15 16:39:26 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len2;

	i = 0;
	if (needle[i] == '\0')
		return (((char *)haystack));
	while (((char *)haystack)[i] != '\0' && len)
	{
		j = 0;
		len2 = len;
		while ((needle[j] == ((char *)haystack)[i + j]) && len2)
		{
			if (needle[j + 1] == '\0')
				return (((char *)haystack) + i);
			j++;
			len2--;
		}
		i++;
		len--;
	}
	return (0);
}
