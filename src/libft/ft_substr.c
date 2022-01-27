/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <sajansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:35:10 by sajansse          #+#    #+#             */
/*   Updated: 2022/01/27 05:46:21 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;
	size_t	lenght;

	i = -1;
	lenght = len;
	if (!s)
		return (NULL);
	if (ft_strlen(s + start, '\0') < lenght)
		lenght = ft_strlen(s + start, '\0');
	if (ft_strlen(s, '\0') < (size_t)start)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (lenght + 1));
	if (!str)
		return (0);
	while (++i < lenght)
		str[i] = *(s + start + i);
	free(s);
	str[i] = '\0';
	return (str);
}
