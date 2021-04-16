/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 11:52:09 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/20 20:42:21 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (((*(str + count) >= 0) && (*(str + count) <= 31)))
			return (0);
		count++;
	}
	if (count == 0)
		return (1);
	return (1);
}
