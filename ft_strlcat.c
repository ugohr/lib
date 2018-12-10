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

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	slen;
	size_t	dlen;

	slen = ft_strlen(src);
	dlen = ft_strlen(dst);
	if (size <= dlen)
		return (size + slen);
	if (slen < (size - dlen))
	{
		ft_memcpy(dst + dlen, src, slen);
		dst = dst + dlen + slen;
	}
	else
	{
		ft_memcpy(dst + dlen, src, size - dlen - 1);
		dst = dst + size - 1;
	}
	*dst = '\0';
	return (dlen + slen);
}
