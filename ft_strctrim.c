/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strctrim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 16:46:57 by juriot            #+#    #+#             */
/*   Updated: 2018/12/02 16:46:59 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	my_is_char(char c, char a)
{
	if (c == a)
		return (1);
	return (0);
}

char		*ft_strctrim(char const *s, char c)
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
	while (my_is_char(s[min], c) == 1)
		min++;
	while (my_is_char(s[max], c) == 1)
		max--;
	if (max - min < 1)
		return (str);
	if (!(str = ft_strsub(s, min, max - min + 1)))
		return (NULL);
	return (str);
}
