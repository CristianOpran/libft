/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: copran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 18:14:12 by copran            #+#    #+#             */
/*   Updated: 2017/12/18 18:14:15 by copran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*ret_last;

	if (!lst)
		return (NULL);
	if (!(ret_last = ft_lstnew(lst->content, lst->content_size)))
		return (NULL);
	ret_last = f(lst);
	ret = ret_last;
	while (lst->next)
	{
		ret->next = f(lst->next);
		ret = ret->next;
		lst = lst->next;
	}
	return (ret_last);
}
