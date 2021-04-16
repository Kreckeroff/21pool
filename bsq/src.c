/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:48:23 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/10 14:48:25 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

extern int		g_flag;
extern char		g_temp[20];
extern char		g_argv[3];

void	ft_clear_argv(void)
{
	int i;

	i = 0;
	while (i < 20)
	{
		g_temp[i] = '\0';
		i++;
	}
}

int		ft_check_w_h(int *width, int *height, int *temp)
{
	if (*height == 0)
		*temp = *width;
	if (*temp != *width)
		return (0);
	else
	{
		*height = *height + 1;
		*width = 0;
	}
	return (1);
}

int		ft_strlen(void)
{
	int i;

	i = 0;
	while (g_temp[i] != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_check_argv(void)
{
	int length;
	int i;

	i = 0;
	length = ft_strlen();
	if (g_temp[length - 1] == g_temp[length - 2]
		|| g_temp[length - 1] == g_temp[length - 2]
		|| g_temp[length - 3] == g_temp[length - 2])
		return (-1);
	while (g_temp[i] != '\0')
	{
		if (g_temp[i] >= 32 && g_temp[i] <= 127)
			i++;
		else
			return (-1);
	}
	g_argv[0] = g_temp[length - 3];
	g_argv[1] = g_temp[length - 2];
	g_argv[2] = g_temp[length - 1];
	return (0);
}

void	ft_print_error_file(int argc)
{
	write(2, "map error\n", 10);
	if (argc > 2)
		write(2, "\n", 1);
}
