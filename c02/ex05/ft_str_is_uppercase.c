/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:56:22 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/20 20:41:45 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!((*(str + count) >= 'A') && ((*(str + count)) <= 'Z')))
			return (0);
		count++;
	}
	if (count == 0)
		return (1);
	return (1);
}
