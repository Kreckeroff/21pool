/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:43:45 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/02 10:39:57 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

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

int		ft_display_file(int fd)
{
	char buff;

	while ((read(fd, &buff, 1)))
	{
		ft_putstr(&buff);
	}
	close(fd);
	return (0);
}

int		main(int argc, char **argv)
{
	int fd;

	if (argc < 2)
	{
		write(1, "File name missing.\n", 20);
		return (1);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		write(1, "Cannot read file.\n", 19);
		return (1);
	}
	if (argc == 2)
	{
		ft_display_file(fd);
	}
	else
	{
		write(1, "Too many arguments.\n", 21);
		return (1);
	}
	return (0);
}
