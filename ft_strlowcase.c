/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:40:36 by juriot            #+#    #+#             */
/*   Updated: 2018/12/02 17:40:37 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlowcase(char *str2)
{
	int	i;

	i = 0;
	while (str2[i] != '\0')
	{
		if (str2[i] >= 'A' && str2[i] <= 'Z')
			str2[i] = str2[i] + 32;
		i++;
	}
	return (str2);
}
