/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uhombour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:25:59 by uhombour          #+#    #+#             */
/*   Updated: 2018/11/21 11:26:23 by uhombour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static long		ft_nblength(int n)
{
	long		size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n != 0)
	{
		n /= 10;
		size++;
	}
	return (size++);
}

static int		ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char			*ft_itoa(int n)
{
	long		n_long;
	long		len;
	char		*str;

	n_long = n;
	len = ft_nblength(n_long);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n_long < 0)
		n_long = -n_long;
	while (len >= 0)
	{
		str[len] = (n_long % 10) + '0';
		len--;
		n_long /= 10;
	}
	if (ft_sign(n))
		str[0] = '-';
	return (str);
}
