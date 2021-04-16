/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:19:19 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/02 21:34:35 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

char	ft_check_sign(char argv)
{
	if (argv == '+')
		return (0);
	if (argv == '-')
		return (1);
	if (argv == '*')
		return (2);
	if (argv == '/')
		return (3);
	if (argv == '%')
		return (4);
	else
		return (5);
}

int		ft_check(int num2, char sign)
{
	if (num2 == 0 && sign == 47)
	{
		write(1, "Stop : division by zero\n", 24);
		return (0);
	}
	if (num2 == 0 && sign == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	else
		return (1);
}

int		ft_calc(int x, int y, char argv)
{
	int sign;
	int (*ptr[5])(int, int);

	ptr[0] = sum;
	ptr[1] = min;
	ptr[2] = mul;
	ptr[3] = del;
	ptr[4] = mod;
	sign = ft_check_sign(argv);
	if (sign == 5)
	{
		return (0);
	}
	return (ptr[sign](x, y));
}

void	doop(int argc, char **argv)
{
	if (ft_check(ft_atoi(argv[3]), argv[2][0]) && argc == 4)
	{
		if (argv[2][1] == '\0')
		{
			ft_putnbr(ft_calc(ft_atoi(argv[1]), ft_atoi(argv[3]), argv[2][0]));
			ft_putchar('\n');
		}
		else
			write(1, "0\n", 2);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
		doop(argc, argv);
	return (0);
}
