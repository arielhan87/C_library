/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 12:44:24 by jhan              #+#    #+#             */
/*   Updated: 2016/12/14 12:45:08 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_ptr;
	size_t	i;

	i = 0;
	new_ptr = NULL;
	if (s && f && (new_ptr = (char*)malloc((ft_strlen(s) + 1) * sizeof(char))))
	{
		while (i < ft_strlen(s))
		{
			new_ptr[i] = f(s[i]);
			i++;
		}
		new_ptr[i] = '\0';
	}
	return (new_ptr);
}
