/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 15:33:57 by copran            #+#    #+#             */
/*   Updated: 2017/12/16 16:20:23 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*m;

	if (len == 0)
		return (b);
	m = (unsigned char *)b;
	while (len--)
	{
		*m = (unsigned char)c;
		if (len)
			m++;
	}
	return (b);
}
