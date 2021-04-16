/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 12:42:28 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/02 12:42:33 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#include <libgen.h>

void	ft_print_loop(void)
{
	char buff;

	while ((read(0, &buff, 1)) != 0)
		write(1, &buff, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_error(char **argv, char *name)
{
	ft_putstr(name);
	ft_putstr(": ");
	ft_putstr(*argv);
	ft_putstr(": ");
	ft_putstr(strerror(errno));
	ft_putstr("\n");
}

void	ft_print_file(int argc, char **argv, int count)
{
	char	buff;
	int		fd;
	char	*name;
	int		length;

	(void)argc;
	name = basename(*argv);
	fd = open(argv[count], O_RDONLY);
	if (fd >= 0)
	{
		while ((length = (read(fd, &buff, 1))))
		{
			if (length == -1)
			{
				ft_print_error(&argv[count], name);
				break ;
			}
			write(1, &buff, 1);
		}
	}
	else
		ft_putstr(strerror(errno));
}

int		main(int argc, char **argv)
{
	int count;

	count = 1;
	while (count < argc)
	{
		if (argc < 2 || ((argv[count][0] == '-') && (argv[count][1] == '\0')))
			ft_print_loop();
		else
			ft_print_file(argc, argv, count);
		count++;
	}
	return (0);
}
