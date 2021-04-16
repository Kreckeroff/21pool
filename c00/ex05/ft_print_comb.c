/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 16:44:18 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/17 17:41:02 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_write_number(char num1, char num2, char num3)
{
	write(1, &num1, 1);
	write(1, &num2, 1);
	write(1, &num3, 1);
}

void	ft_write_symbol(void)
{
	write(1, ",", 1);
	write(1, " ", 1);
}

void	ft_print_comb(void)
{
	char num1;
	char num2;
	char num3;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = num1 + 1;
		while (num2 <= '9')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				ft_write_number(num1, num2, num3);
				if (!(num1 == '7' && num2 == '8' && num3 == '9'))
				{
					ft_write_symbol();
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}
