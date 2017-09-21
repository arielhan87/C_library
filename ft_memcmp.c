/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:02:14 by jhan              #+#    #+#             */
/*   Updated: 2016/12/08 15:02:17 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned const char	*tmp_s1;
	unsigned const char	*tmp_s2;

	tmp_s1 = s1;
	tmp_s2 = s2;
	while (n--)
	{
		if (*tmp_s1 != *tmp_s2)
		{
			return (*tmp_s1 - *tmp_s2);
		}
		tmp_s1++;
		tmp_s2++;
	}
	return (0);
}
