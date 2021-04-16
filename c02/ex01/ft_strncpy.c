/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:25:15 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/20 15:49:15 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				flag;

	i = 0;
	flag = 1;
	while (i < n)
	{
		if (*(src + i) == '\0' && flag == 1)
			flag = 0;
		if (flag == 1)
			*(dest + i) = *(src + i);
		else
			*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
