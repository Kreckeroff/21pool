/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 17:25:23 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/25 19:27:15 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	long long int	count;
	long long int	buff;

	count = 0;
	buff = min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int*)malloc(((long long int)max - (long long int)min) * 4);
	if (range == NULL)
		return (-1);
	while (buff < max)
	{
		*(*range + buff - (long long int)min) = buff;
		count++;
		buff++;
	}
	return (count);
}
