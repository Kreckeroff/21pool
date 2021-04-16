/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 19:51:35 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/19 10:12:24 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printnb(int nb)
{
	write(1, &nb, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_printnb('-');
		ft_printnb('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		ft_printnb('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_printnb(nb + '0');
	}
}
