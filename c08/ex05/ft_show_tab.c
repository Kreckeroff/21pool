/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 19:23:43 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/27 20:12:50 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	count;

	count = 0;
	while ((par + count)->str != NULL)
	{
		ft_putstr((par + count)->str);
		ft_putnbr((par + count)->size);
		ft_putstr((par + count)->copy);
		count++;
	}
}
