/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 12:24:54 by jhan              #+#    #+#             */
/*   Updated: 2016/12/02 13:00:53 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned const char	*tmp_s;

	tmp_s = s;
	while (n-- != 0)
	{
		if (*tmp_s == (unsigned char)c)
		{
			return ((void *)tmp_s);
		}
		else
		{
			++tmp_s;
		}
	}
	return (NULL);
}
