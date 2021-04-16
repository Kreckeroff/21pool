/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 15:31:38 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/27 18:58:03 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char					*ft_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = '\0';
	return (dest);
}

int						ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

struct s_stock_str		*ft_strs_to_tab(int ac, char **av)
{
	int				count;
	t_stock_str		*str;

	count = 0;
	str = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (str == NULL)
		return (NULL);
	while (count < ac)
	{
		(str + count)->size = ft_strlen(*(av + count));
		(str + count)->str = *(av + count);
		(str + count)->copy = (char *)malloc((str + count)->size + 1);
		if ((str + count)->copy == NULL)
			return (NULL);
		(str + count)->copy = ft_strcpy((str + count)->copy, *(av + count));
		count++;
	}
	(str + count)->str = NULL;
	return (str);
}
