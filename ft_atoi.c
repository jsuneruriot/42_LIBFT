/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 17:46:59 by juriot            #+#    #+#             */
/*   Updated: 2018/11/15 17:47:05 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int nb;

	i = 0;
	neg = 0;
	nb = 0;
	while (str[i] == (' ') || str[i] == ('\t') || str[i] == ('\n')
			|| str[i] == ('\v') || str[i] == ('\f') || str[i] == ('\r'))
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == ('+') || str[i] == ('-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10;
		nb = nb + (((int)str[i]) - 48);
		i++;
	}
	if (neg == 1)
		return (nb * -1);
	else
		return (nb);
}
