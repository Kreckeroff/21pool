/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 09:44:13 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/20 20:43:02 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!((*(str + count) >= 'a') && (*(str + count) <= 'z')))
			return (0);
		count++;
	}
	if (count == 0)
		return (1);
	return (1);
}
