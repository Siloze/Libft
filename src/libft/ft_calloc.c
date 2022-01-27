/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:10:12 by sajansse          #+#    #+#             */
/*   Updated: 2021/11/03 16:10:42 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t count, size_t size )
{
	char	*str;
	size_t	i;

	str = malloc(count * size);
	i = 0;
	if (!str)
		return (NULL);
	while (i < (count * size))
	{
		str[i] = 0;
		i++;
	}
	return (str);
}
