/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uhombour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:43:12 by uhombour          #+#    #+#             */
/*   Updated: 2018/12/10 15:25:19 by uhombour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = ft_strlen(dest);
	if (size < len)
		return (ft_strlen(src) + size);
	while (i < size - len)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (ft_strlen(src) + len);
}
