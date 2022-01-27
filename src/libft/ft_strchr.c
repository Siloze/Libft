/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <sajansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:30:32 by sajansse          #+#    #+#             */
/*   Updated: 2022/01/21 01:05:23 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == 0)
			return ((char *) s + ft_strlen(s, '\0'));
		if (*s == '\0')
			return (NULL);
		if (*s++ == (char)c)
			return ((char *)--s);
	}
	return (NULL);
}
