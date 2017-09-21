/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 15:29:42 by jhan              #+#    #+#             */
/*   Updated: 2016/12/08 15:29:46 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*ptr;

	ptr = NULL;
	if (size <= 0)
		return (NULL);
	if ((ptr = (char *)malloc(size)))
	{
		ft_bzero(ptr, size);
	}
	return ((void *)ptr);
}
