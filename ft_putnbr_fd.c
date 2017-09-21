/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/20 13:19:56 by jhan              #+#    #+#             */
/*   Updated: 2017/01/04 11:39:09 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

void			ft_putnbr_fd(int n, int fd)
{
	char	a;

	if (n < 0)
		write(fd, "-", 1);
	if (n / 10)
		ft_putnbr_fd(ft_abs(n / 10), fd);
	a = '0' + ft_abs(n % 10);
	write(fd, &a, 1);
}
