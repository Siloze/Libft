/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:14:51 by sajansse          #+#    #+#             */
/*   Updated: 2021/11/04 16:29:08 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newstr;
	t_list	*temp;

	if (lst && f)
	{
		newstr = ft_lstnew(f(lst->content));
		temp = newstr;
		while (lst->next)
		{
			lst = lst->next;
			temp->next = ft_lstnew(f(lst->content));
			if (!temp)
			{
				ft_lstclear(&newstr, del);
				return (NULL);
			}
			temp = temp->next;
		}
		return (newstr);
	}
	return (NULL);
}
