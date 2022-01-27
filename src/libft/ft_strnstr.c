/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:53:56 by sajansse          #+#    #+#             */
/*   Updated: 2021/11/03 17:03:13 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	k;

	i = -1;
	k = 0;
	while (needle[k])
		k++;
	if (k == 0)
		return ((char *)haystack);
	while ((haystack[++i]) && i < len)
	{
		if (k <= len - i)
		{
			if (ft_strncmp (&haystack[i], needle, k) == 0)
				return ((char *) &haystack[i]);
		}
	}
	return (0);
}
