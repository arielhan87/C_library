/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 11:32:54 by jhan              #+#    #+#             */
/*   Updated: 2016/12/02 12:40:40 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	unsigned char		*tmp_s1;
	unsigned const char	*tmp_s2;

	tmp_s1 = s1;
	tmp_s2 = s2;
	while (n-- != 0)
	{
		*tmp_s1++ = *tmp_s2++;
	}
	return (s1);
}
