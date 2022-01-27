/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:25:06 by sajansse          #+#    #+#             */
/*   Updated: 2021/11/04 17:25:07 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{	
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!src && !dst)
		return (0);
	while (n--)
		*d++ = *s++;
	return (dst);
}
