/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 18:33:48 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/23 19:34:37 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long count;

	count = 2;
	if (nb < 2)
		return (0);
	while ((count * count) <= nb)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 0;
	while (i != 1)
	{
		i = ft_is_prime(nb);
		if (i == 1)
			return (nb);
		nb++;
	}
	return (0);
}
