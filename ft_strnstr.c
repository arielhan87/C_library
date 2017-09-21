/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:23:57 by jhan              #+#    #+#             */
/*   Updated: 2016/12/08 15:24:01 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;

	if (!*s2)
		return ((char *)s1);
	i = 0;
	j = 0;
	while (s1[i] && i < (int)n)
	{
		while (s1[i] && s2[j] && s1[i] == s2[j] && i < (int)n)
		{
			i++;
			j++;
		}
		if (j == (int)ft_strlen(s2))
			return ((char *)s1 + i - j);
		else
			i = (i - j) + 1;
		j = 0;
	}
	return (NULL);
}
