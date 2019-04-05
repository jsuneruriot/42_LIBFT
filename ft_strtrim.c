/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 18:24:29 by juriot            #+#    #+#             */
/*   Updated: 2018/11/16 18:24:30 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	my_is_spaces(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\0')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		min;
	int		max;

	if (!s)
		return (NULL);
	max = ft_strlen(s);
	min = 0;
	if (!(str = ft_strnew(max)))
		return (NULL);
	while (my_is_spaces(s[min]) == 1)
		min++;
	while (my_is_spaces(s[max]) == 1)
		max--;
	if (max - min < 1)
		return (str);
	if (!(str = ft_strsub(s, min, max - min + 1)))
		return (NULL);
	return (str);
}
