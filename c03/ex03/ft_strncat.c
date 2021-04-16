/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 16:16:55 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/21 16:26:32 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int count;

	count = 0;
	while (*(src + count) != '\0' && count < nb)
		(*(dest + count) = *(src + count));
	return (dest);
}
