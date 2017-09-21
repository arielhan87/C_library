/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 10:28:49 by jhan              #+#    #+#             */
/*   Updated: 2017/01/10 10:30:11 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	if ((new = (t_list *)malloc(sizeof(t_list))))
	{
		if (content)
		{
			if ((new->content = (void *)malloc(content_size)))
			{
				ft_memcpy(new->content, content, content_size);
				ft_memcpy(&new->content_size, &content_size, \
							sizeof(content_size));
			}
			else
				return (NULL);
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
	}
	else
		return (NULL);
	return (new);
}
