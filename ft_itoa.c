/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 18:09:56 by copran            #+#    #+#             */
/*   Updated: 2017/12/18 18:10:01 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static int	ft_nbsign(int nb)
{
	if (nb < 0)
		return (1);
	else
		return (0);
}

static int	ft_abs(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		return (nb);
	}
	return (nb);
}

char		*ft_itoa(int n)
{
	int		nlen;
	int		sign;
	char	*str;

	nlen = ft_nblen(n);
	sign = ft_nbsign(n);
	if (!(str = (char *)malloc(sizeof(char) * (nlen + sign + 1))))
		return (NULL);
	if (str)
	{
		str = str + nlen + sign;
		*str = '\0';
		if (n < 0)
			n = -n;
		if (n == 0)
			*--str = '0';
		while (n != 0)
		{
			*--str = ft_abs(n % 10) + '0';
			n = n / 10;
		}
		if (sign)
			*--str = '-';
	}
	return (str);
}
