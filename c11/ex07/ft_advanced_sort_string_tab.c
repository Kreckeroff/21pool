/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:27:22 by rbowen            #+#    #+#             */
/*   Updated: 2021/03/03 18:27:25 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **s1, char **s2)
{
	char *buff;

	buff = *s1;
	*s1 = *s2;
	*s2 = buff;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		status;

	status = 1;
	i = 0;
	while (status)
	{
		status = 0;
		i = 0;
		if (*(tab))
			while (*(tab + i + 1) != '\0')
			{
				if (cmp(tab[i], tab[i + 1]) > 0)
				{
					ft_swap(&tab[i], &tab[i + 1]);
					status = 1;
				}
				i++;
			}
	}
}
