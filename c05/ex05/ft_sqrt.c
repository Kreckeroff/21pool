/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:02:52 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/23 18:16:29 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check(int start, int last, int nb)
{
	int middl;

	middl = (last + start) / 2;
	if (start + 1 == last)
		return (0);
	if (nb / middl == middl)
	{
		if (nb % middl == 0)
			return (middl);
		else
			return (0);
	}
	if (nb / middl < middl)
		return (ft_check(start, middl, nb));
	else
		return (ft_check(middl, last, nb));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_check(0, nb, nb));
}
