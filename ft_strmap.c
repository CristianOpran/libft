/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 18:04:05 by copran            #+#    #+#             */
/*   Updated: 2017/12/18 18:04:08 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*t;

	if (s && f)
	{
		i = 0;
		while (s[i])
			i++;
		if ((t = (char*)malloc(sizeof(char) * (i + 1))) == NULL)
			return (NULL);
		i = 0;
		while (s[i])
		{
			t[i] = f(s[i]);
			i++;
		}
		t[i] = '\0';
		return (t);
	}
	return (NULL);
}
