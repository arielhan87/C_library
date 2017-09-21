/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 15:10:28 by jhan              #+#    #+#             */
/*   Updated: 2016/12/02 15:10:33 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = ft_strlen(dst);
	res = ft_strlen(src) + ft_strlen(dst);
	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	while (src[i] && (size > j + 1))
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (res);
}
