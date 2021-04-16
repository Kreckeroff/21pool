/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_largest_square.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 15:09:53 by dweeper           #+#    #+#             */
/*   Updated: 2021/03/10 13:38:09 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

char	check_obstacle(t_point *xy, int inc_x, t_point *obstacles)
{
	if (((xy->x + inc_x) > obstacles->x) || ((xy->y + inc_x) > obstacles->y))
		return (0);
	while ((obstacles)->next != 0)
	{
		obstacles = (obstacles)->next;
		if ((obstacles->x >= xy->x) && (obstacles->x <= (xy->x + inc_x))
				&& (obstacles->y >= xy->y) && (obstacles->y <= (xy->y + inc_x)))
			return (0);
	}
	return (1);
}

char	check_square(t_point *xy, int area, t_point *square)
{
	if ((xy->x >= (square->x)) && (xy->x <= (square->x + area))
			&& (xy->y >= square->y) && (xy->y <= (square->y + area)))
		return (1);
	return (0);
}

int		try2expand(t_point *xy, t_point *array)
{
	char	expanded;
	int		inc_x;

	inc_x = 0;
	expanded = 1;
	while (check_obstacle(xy, inc_x, array))
	{
		inc_x++;
	}
	inc_x--;
	return (inc_x);
}

void	print_this_guy(t_point *array,
		t_point *square, int area, char print_im[3])
{
	t_point *xy;

	xy = new_point(1, 1);
	while (xy->y <= (array)->y)
	{
		xy->x = 1;
		while (xy->x <= (array)->x)
		{
			if (check_square(xy, area, square))
				write(1, &print_im[2], 1);
			else if (!(check_obstacle(xy, 0, array)))
				write(1, &print_im[1], 1);
			else
				write(1, &print_im[0], 1);
			(xy->x)++;
		}
		(xy->y)++;
		write(1, "\n", 1);
	}
	free(xy);
	free(square);
}

void	find_this_guy(t_point **array, char print_im[3])
{
	int		area;
	int		temp;
	t_point	*xy;
	t_point	*square;

	area = -1;
	xy = new_point(1, 1);
	square = new_point(0, 0);
	while (xy->y <= (*array)->y)
	{
		xy->x = 1;
		while (xy->x <= (*array)->x)
		{
			if ((temp = try2expand(xy, *array)) > area)
			{
				square->x = xy->x;
				square->y = xy->y;
				area = temp;
			}
			(xy->x)++;
		}
		(xy->y)++;
	}
	free(xy);
	print_this_guy(*array, square, area, print_im);
}
