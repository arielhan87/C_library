/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 13:12:58 by jhan              #+#    #+#             */
/*   Updated: 2017/01/03 14:15:34 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void		sign_of_int(int *n, int *sign)
{
	if (*n < 0)
	{
		*n = *n * -1;
		*sign = 1;
	}
}

static int		length_str(int n)
{
	int		tmp;
	int		len;

	len = 2;
	tmp = n;
	while (tmp /= 10)
		len++;
	return (len);
}

char			*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*str;

	sign = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	sign_of_int(&n, &sign);
	len = length_str(n);
	len = len + sign;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
