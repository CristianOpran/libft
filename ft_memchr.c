/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/17 21:30:25 by copran            #+#    #+#             */
/*   Updated: 2017/12/17 21:30:31 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*x;
	void			*y;

	x = (unsigned char *)src;
	y = (void *)src;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char)c)
			return (y + i);
		i++;
	}
	return (NULL);
}
