/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uhombour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 10:25:33 by uhombour          #+#    #+#             */
/*   Updated: 2018/11/28 12:44:17 by uhombour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	strjoin = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!strjoin)
		return (NULL);
	ft_strcpy(strjoin, s1);
	ft_strcat(strjoin, s2);
	return (strjoin);
}
