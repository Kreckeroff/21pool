/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 17:11:35 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/24 18:05:34 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (*(s1 + count) == *(s2 + count) &&
			*(s1 + count) != '\0' && *(s2 + count) != '\0')
	{
		count++;
	}
	return (*(s1 + count) - *(s2 + count));
}

void	ft_print(char **argv, int argc)
{
	int i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(*(argv + i));
		ft_putstr("\n");
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		search;
	char	*buff;

	search = 1;
	while (search != 0)
	{
		i = 1;
		search = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(*(argv + i), *(argv + i + 1)) > 0)
			{
				buff = *(argv + i);
				*(argv + i) = *(argv + i + 1);
				*(argv + i + 1) = buff;
				search = 1;
			}
			i++;
		}
	}
	ft_print(argv, argc);
	return (0);
}
