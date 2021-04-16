/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 14:48:30 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/10 14:48:32 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

extern int		g_flag;
extern char		g_temp[20];
extern char		g_argv[3];

int		ft_atoi(char *str)
{
	int flag;
	int num;
	int count;
	int length;

	length = ft_strlen();
	count = 0;
	flag = 0;
	num = 0;
	while (count < length - 3)
	{
		if ((*(str + count) >= '0') && (*(str + count) <= '9'))
		{
			num = (num * 10) + (*(str + count) - '0');
			count++;
		}
		else
			return (-1);
	}
	return (num);
}

int		ft_check_map(char buff, int heigth, int width, t_point **array)
{
	int length;

	length = ft_strlen();
	if (buff == g_temp[length - 3] || buff == g_temp[length - 2])
	{
		if (buff == g_temp[length - 2])
		{
			add_point(array, width + 1, heigth + 1);
		}
	}
	else
		return (-1);
	return (0);
}

int		ft_read_file_loop(int fd, int argv_heigth, t_point **array)
{
	char	buff;
	int		width;
	int		heigth;
	int		temp;

	heigth = 0;
	width = 0;
	temp = 0;
	while ((read(fd, &buff, 1) == 1))
	{
		if (buff != '\n')
		{
			if (ft_check_map(buff, heigth, width, array) == -1)
				g_flag = -1;
			width++;
		}
		else if (ft_check_w_h(&width, &heigth, &temp) == 0)
			g_flag = -1;
	}
	if (argv_heigth != heigth || g_flag == -1)
		return (-1);
	else
		add2start(array, temp, heigth);
	return (0);
}

int		ft_read_file(int fd, int argv_heigth, t_point **array)
{
	char	buff;
	int		width;
	int		heigth;
	int		temp;

	heigth = 0;
	width = 0;
	temp = 0;
	while ((read(fd, &buff, 1) == 1))
	{
		if (buff != '\n')
		{
			if (ft_check_map(buff, heigth, width, array) == -1)
				g_flag = -1;
			width++;
		}
		else if (ft_check_w_h(&width, &heigth, &temp) == 0)
			g_flag = -1;
	}
	if (argv_heigth != heigth || g_flag == -1)
		return (-1);
	else
		add2start(array, temp, heigth);
	return (0);
}

void	ft_read_argv(int fd)
{
	char	buff;
	int		width;
	int		length;

	width = 0;
	while ((length = (read(fd, &buff, 1))))
	{
		if (length == -1)
			break ;
		if (buff != '\n')
		{
			g_temp[width] = buff;
			width++;
		}
		else
			break ;
	}
	g_temp[width] = '\0';
}
