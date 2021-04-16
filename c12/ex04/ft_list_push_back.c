/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:28:50 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/04 17:32:21 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	buff;

	if (*begin_list)
	{
		buff = *begin_list;
		while (buff->next)
			buff = buff->next;
		buff->ft_create_elem(data);
	}
}
