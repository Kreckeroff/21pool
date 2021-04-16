/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 09:50:12 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/23 18:17:39 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int count;

	count = 0;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > count)
	{
		result = result * (count + 1);
		count++;
	}
	return (result);
}
