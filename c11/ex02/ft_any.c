/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:02:56 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/02 19:33:17 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int count;

	count = 0;
	while (*(tab + count) != '\0')
	{
		if (f(*(tab + count)) != 0)
			return (1);
		count++;
	}
	return (0);
}
