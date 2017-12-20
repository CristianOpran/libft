/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 16:22:56 by copran            #+#    #+#             */
/*   Updated: 2017/12/18 16:35:53 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *r;

	r = NULL;
	if (s1 && s2)
	{
		if ((r = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)) == NULL)
			return (NULL);
		ft_strcpy(r, s1);
		ft_strcat(r, s2);
	}
	return (r);
}
