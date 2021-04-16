/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 13:40:23 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/20 13:47:16 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if ((*(str + count) >= 'A') && ((*(str + count)) <= 'Z'))
			*(str + count) = (*(str + count) - 'A' + 'a');
		count++;
	}
	return (str);
}
