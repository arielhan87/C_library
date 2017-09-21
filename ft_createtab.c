/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_createtab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 12:36:03 by jhan              #+#    #+#             */
/*   Updated: 2017/01/12 12:36:47 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len(char *s, char c, int start)
{
	int		len;

	len = 0;
	while (s[start] != c && s[start])
	{
		len++;
		start++;
	}
	return (len);
}

static char	*ft_createstr(char *s, char *s2, char c, int start)
{
	int		i;

	i = 0;
	while (s[start] && s[start] != c)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

static char	**ft_createtab(char **tab, char *s, char c, int start)
{
	int		len;
	int		i;
	int		j;

	i = start;
	j = 0;
	while (s[i])
	{
		len = ft_len(s, c, start);
		tab[j] = (char *)malloc(sizeof(char) * (len + 1));
		if (tab[j])
		{
			tab[j] = ft_createstr(s, tab[j], c, start);
			j++;
			i += ft_len(s, c, start);
			while (s[i] == c && s[i])
				i++;
			start = i;
		}
		else
			return (NULL);
	}
	tab[j] = 0;
	return (tab);
}
