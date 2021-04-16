/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 10:43:56 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/21 15:33:43 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_rush(int lenght, char firststr, char midstr, char laststr)
{
	int count;

	count = 1;
	if (count == 1)
		ft_putchar(firststr);
	count++;
	while (count <= lenght)
	{
		if (count <= (lenght - 1))
			ft_putchar(midstr);
		if (count == lenght)
			ft_putchar(laststr);
		count++;
	}
}

void	rush(int length, int height)
{
	int count;

	count = 1;
	if (length <= 0 || height <= 0)
		return ;
	if (count == 1)
	{
		ft_print_rush(length, 'A', 'B', 'C');
		ft_putchar('\n');
	}
	count++;
	while (count <= height)
	{
		if (count <= (height - 1))
			ft_print_rush(length, 'B', ' ', 'B');
		if (count == height)
			ft_print_rush(length, 'C', 'B', 'A');
		ft_putchar('\n');
		count++;
	}
}
