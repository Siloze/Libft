/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:49:49 by sajansse          #+#    #+#             */
/*   Updated: 2021/11/03 16:57:53 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src2;
	char	*dst2;

	i = -1;
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (!src2 && !dst2)
		return (NULL);
	if (dst <= src)
	{
		while (++i < len)
			dst2[i] = src2[i];
	}
	else
	{
		while (len > 0)
		{
			dst2[len - 1] = src2[len - 1];
			len--;
		}
	}	
	return (dst);
}
