/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/13 13:18:58 by jhan              #+#    #+#             */
/*   Updated: 2016/12/13 13:20:13 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (ft_strncmp(s1 + 1, s2 + 1, n - 1));
	else
		return ((unsigned char)*s1 - (unsigned char)*s2);
}
