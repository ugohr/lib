/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uhombour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:05:55 by uhombour          #+#    #+#             */
/*   Updated: 2018/11/14 15:19:18 by uhombour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	if (len2 < n)
		ft_strcpy(s1 + len1, s2);
	else
	{
		ft_strncpy(s1 + len1, s2, n);
		s1[len1 + n] = '\0';
	}
	return (s1);
}
