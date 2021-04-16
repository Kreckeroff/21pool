/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 16:54:32 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/25 18:53:58 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int				*i;
	long long int	buff;

	buff = min;
	if (min >= max)
		return (NULL);
	i = (int*)malloc(((long long int)max - (long long int)min) * 4);
	if (i == NULL)
		return (NULL);
	while (buff < max)
	{
		*(i + buff - min) = buff;
		buff++;
	}
	return (i);
}
