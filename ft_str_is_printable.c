/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_isprintable.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 21:24:50 by copran            #+#    #+#             */
/*   Updated: 2017/12/18 21:26:13 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	else
	{
		while (str[i])
		{
			if (str[i] < 32 || str[i] == 127)
				return (0);
			i++;
		}
		return (1);
	}
}
