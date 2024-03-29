/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <sajansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:23:14 by sajansse          #+#    #+#             */
/*   Updated: 2022/01/21 01:05:33 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	void	*temp;

	temp = malloc((ft_strlen(s1, '\0') + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	return (ft_memcpy(temp, (const void *)s1, ft_strlen(s1, '\0') + 1));
}
