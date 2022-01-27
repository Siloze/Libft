/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <sajansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:01:22 by sajansse          #+#    #+#             */
/*   Updated: 2022/01/21 01:05:41 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*dest;

	if (s2 == NULL || s1 == NULL)
		return (NULL);
	dest = malloc(sizeof(char *) * (ft_strlen(s1, '\0') + ft_strlen
				(s2, '\0') + 1));
	if (dest == NULL)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		dest[i] = s1[i];
	j = 0;
	while (s2[j] != '\0')
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}
