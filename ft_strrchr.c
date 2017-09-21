/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:23:45 by jhan              #+#    #+#             */
/*   Updated: 2016/12/08 15:23:47 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;
	char	*ret;

	count = 0;
	ret = NULL;
	if ((char)c == '\0')
	{
		return ((char *)(s + ft_strlen(s)));
	}
	while (*(s + count) != '\0')
	{
		if (*(s + count) == (char)c)
		{
			ret = (char *)(s + count);
		}
		count++;
	}
	return (ret);
}
