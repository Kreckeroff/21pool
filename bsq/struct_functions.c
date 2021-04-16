/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 13:21:03 by dweeper           #+#    #+#             */
/*   Updated: 2021/03/09 18:07:45 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_point		*new_point(int x, int y)
{
	t_point *new;

	new = malloc(sizeof(t_point));
	new->x = x;
	new->y = y;
	new->next = 0;
	return (new);
}

void		add_point(t_point **array, int x, int y)
{
	t_point *new;
	t_point *temp;

	new = new_point(x, y);
	if ((*array) == 0)
	{
		*array = new;
		return ;
	}
	temp = *array;
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = new;
}

void		add2start(t_point **array, int width, int heigth)
{
	t_point *new;

	new = new_point(width, heigth);
	new->next = *array;
	*array = new;
}

void		struct_clear(t_point **array)
{
	int		count;
	t_point	*temp;

	count = 0;
	while ((*array)->next != 0)
	{
		temp = (*array)->next;
		free(*array);
		*array = temp;
	}
	free(*array);
}
