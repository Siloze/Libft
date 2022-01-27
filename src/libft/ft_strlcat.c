/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <sajansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:52:31 by sajansse          #+#    #+#             */
/*   Updated: 2022/01/21 00:53:46 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				k;
	int				len;

	i = 0;
	while (dst[i] != '\0' && i != dstsize)
		i++;
	len = i;
	if (dstsize - i == 0)
		return (i + ft_strlen(src, '\0'));
	k = -1;
	while (src[++k])
	{
		if (dstsize - i != 1)
			dst[i++] = src[k];
	}
	dst[i] = '\0';
	return (len + k);
}
