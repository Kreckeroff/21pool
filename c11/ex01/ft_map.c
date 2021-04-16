/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 11:32:51 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/02 19:31:58 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int count;
	int *tab1;

	count = 0;
	tab1 = (int *)malloc(4 * length);
	if (tab1 == NULL)
		return (NULL);
	while (length > count)
	{
		tab1[count] = f(tab[count]);
		count++;
	}
	return (tab1);
}
