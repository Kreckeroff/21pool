/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 16:49:19 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/18 19:07:49 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	char	buff;
	int		count;

	count = 0;
	while (count < size / 2)
	{
		buff = *(tab + count);
		*(tab + count) = *(tab + size - 1 - count);
		*(tab + size - 1 - count) = buff;
		count++;
	}
}
