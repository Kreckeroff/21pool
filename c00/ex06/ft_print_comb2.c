/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 18:39:59 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/17 20:52:39 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_symbol(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb(int num1, int num2)
{
	ft_print(num1 / 10 + '0');
	ft_print(num1 % 10 + '0');
	write(1, " ", 1);
	ft_print(num2 / 10 + '0');
	ft_print(num2 % 10 + '0');
}

void	ft_print_comb2(void)
{
	char num1;
	char num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 99)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_print_comb(num1, num2);
			if (!(num1 / 10 == 9 && num1 % 10 == 8))
			{
				ft_print_symbol();
			}
			num2++;
		}
		num1++;
	}
}
