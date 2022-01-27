/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sajansse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:39:35 by sajansse          #+#    #+#             */
/*   Updated: 2021/11/03 16:45:04 by sajansse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len(int nb)
{
	int	nbofcar;

	nbofcar = 0;
	if (nb <= 9)
		return (1);
	while (nb > 9)
	{
		nb = nb / 10;
		nbofcar++;
	}
	nbofcar++;
	return (nbofcar);
}

void	putnb(int n, char *str, int nbofstr)
{
	int	i;

	i = nbofstr - 1;
	if (n > 9)
	{
		putnb(n / 10, str, i);
		str[i] = 48 + (n % 10);
	}
	else
		str[i] = 48 + n;
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;

	neg = 0;
	if (n == -2147483648)
	{
		n = -147483648;
		neg++;
	}
	if (n < 0)
	{
		n = n * -1;
		neg++;
	}
	str = malloc((len(n) + 1 + neg) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '-';
	if (neg == 2)
		str[1] = '2';
	str[len(n) + 1] = '8';
	str[len(n) + neg] = '\0';
	putnb(n, str, len(n) + neg);
	return (str);
}
