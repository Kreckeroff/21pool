/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:47:03 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/25 18:56:02 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	long	length;
	char	*dest;
	long	i;

	i = 0;
	length = ft_strlen(src);
	dest = (char*)malloc(sizeof(src) * (length + 1));
	if (dest == NULL)
		return (NULL);
	while (*(src + i))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
