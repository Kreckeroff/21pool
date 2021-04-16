/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:04:40 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/02 19:34:12 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int count;
	int flag;

	flag = 0;
	count = 0;
	while (length - 1 > count)
	{
		if (f(*(tab + count), *(tab + count + 1)) > 0)
		{
			if (flag == 1)
				return (0);
			flag = 2;
		}
		if (f(*(tab + count), *(tab + count + 1)) < 0)
		{
			if (flag == 2)
				return (0);
			flag = 1;
		}
		count++;
	}
	return (1);
}
