/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 17:19:26 by copran            #+#    #+#             */
/*   Updated: 2017/12/17 18:15:23 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	i;

	i = ft_strlen(s) + 1;
	if ((dest = (char*)malloc(sizeof(char) * i)))
	{
		ft_strcpy(dest, s);
		return (dest);
	}
	return (NULL);
}
