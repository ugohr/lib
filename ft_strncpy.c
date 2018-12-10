/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uhombour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:46:02 by uhombour          #+#    #+#             */
/*   Updated: 2018/11/14 15:08:27 by uhombour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*d;

	d = dst;
	while (*src != '\0' && len > 0)
	{
		*d++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*d++ = '\0';
		len--;
	}
	return (dst);
}
