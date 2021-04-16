/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 13:49:52 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/09 13:03:51 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		g_flag;
char	g_temp[20];
char	g_argv[3];

void	ft_true(t_point **array)
{
	find_this_guy(array, g_argv);
	ft_clear_argv();
	struct_clear(array);
	*array = NULL;
}

void	ft_false(t_point **array, int i)
{
	ft_print_error_file(i);
	if (*array != NULL)
	{
		struct_clear(array);
		*array = NULL;
	}
	ft_clear_argv();
}

int		ft_ft(int fd, int heigth, t_point **array, int i)
{
	int flag1;
	int flag2;

	flag1 = 0;
	flag2 = 0;
	ft_read_argv(fd);
	heigth = ft_atoi(g_temp);
	if (heigth == -1 || heigth == 0)
	{
		ft_print_error_file(i);
		ft_clear_argv();
		return (-1);
	}
	flag1 = ft_check_argv();
	if (fd == 0)
		flag2 = ft_read_file_loop(fd, heigth, array);
	else
		flag2 = ft_read_file(fd, heigth, array);
	if (flag1 != -1 && flag2 != -1)
		ft_true(array);
	else
		ft_false(array, i);
	return (0);
}

int		ft_open_file(int argc, char **argv, t_point **array)
{
	int fd;
	int i;
	int heigth;

	i = 1;
	heigth = 0;
	if (argc < 2)
		ft_ft(0, heigth, array, argc);
	while ((argc - 1) >= i)
	{
		if (i > 1 && g_flag != -1 && fd > 0)
			write(1, "\n", 1);
		fd = open(argv[i], O_RDONLY);
		if (fd < 0)
			ft_print_error_file(argc);
		else
		{
			g_flag = 0;
			ft_ft(fd, heigth, array, argc);
		}
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	t_point	**array;
	t_point *ptr;

	ptr = 0;
	array = &ptr;
	ft_open_file(argc, argv, array);
}
