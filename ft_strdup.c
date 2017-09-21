/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:49:31 by jhan              #+#    #+#             */
/*   Updated: 2016/12/08 14:58:50 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*cpy;

	cpy = (char*)malloc(sizeof(*cpy) * ft_strlen(s1) + 1);
	if (cpy != NULL)
	{
		ft_strcpy(cpy, s1);
	}
	return (cpy);
}
