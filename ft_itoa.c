/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juriot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:56:22 by juriot            #+#    #+#             */
/*   Updated: 2018/11/22 15:56:31 by juriot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		my_count(int n)
{
	int	len;

	len = 0;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		len++;
	}
	return (len + 1);
}

char			*ft_itoa(int n)
{
	char			*dst;
	int				len;
	int				neg;
	unsigned int	nb;

	neg = 0;
	len = my_count(n);
	if (n < 0)
	{
		neg = 1;
		n = -n;
		len++;
	}
	nb = n;
	if (!(dst = ft_strnew((size_t)len)))
		return (NULL);
	while (len > 0)
	{
		dst[len - 1] = nb % 10 + 48;
		nb = nb / 10;
		len--;
	}
	if (neg == 1)
		dst[0] = '-';
	return (dst);
}
