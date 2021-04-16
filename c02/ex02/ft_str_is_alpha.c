/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 21:10:43 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/20 20:40:02 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (!((*(str + count) >= 'a' && *(str + count) <= 'z')
					|| (*(str + count) >= 'A' && *(str + count) <= 'Z')))
			return (0);
		count++;
	}
	if (count == 0)
		return (1);
	return (1);
}
