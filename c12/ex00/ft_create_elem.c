/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:56:58 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/04 16:58:09 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list *buff;

	buff = (t_list *)malloc(sizeof(t_list));
	if (buff == NULL)
		return (NULL);
	buff->data = data;
	buff->next = NULL;
	return (buff);
}
