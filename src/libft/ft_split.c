/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <sajansse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:17:36 by sajansse          #+#    #+#             */
/*   Updated: 2022/01/21 01:05:05 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	wordcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (words);
}

char	*no_charset(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_strlcpy (str, s, i + 1);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		len;
	char	**str;

	if (!s)
		return (NULL);
	len = wordcount(s, c);
	str = malloc(sizeof(char *) * (len + 1));
	if (!str)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (*s == c)
			s++;
		str[i] = no_charset(s, c);
		if (!str[i])
		{
			free(str);
			return (NULL);
		}
		s += ft_strlen(str[i], '\0');
	}
	str[i] = 0;
	return (str);
}
