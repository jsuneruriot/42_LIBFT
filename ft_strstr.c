/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 16:33:39 by juriot            #+#    #+#             */
/*   Updated: 2018/11/15 16:33:41 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	i;
	int j;

	i = 0;
	if (needle[i] == '\0')
		return (((char *)haystack));
	while (((char *)haystack)[i] != '\0')
	{
		j = 0;
		while (needle[j] == ((char *)haystack)[i + j])
		{
			if (needle[j + 1] == '\0')
				return (((char *)haystack) + i);
			j++;
		}
		i++;
	}
	return (0);
}
