/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:33:31 by jhan              #+#    #+#             */
/*   Updated: 2017/01/12 12:33:36 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_tabsize(char *s, char c)
{
	int		size;
	int		i;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			size++;
			i++;
		}
	}
	return (size);
}