/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 15:51:06 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/21 17:18:17 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	while (*(s1 + count) == *(s2 + count) &&
			*(s1 + count) != '\0' && *(s2 + count) != '\0' &&
			count < n)
		count++;
	return ((unsigned char)*(s1 + count) - (unsigned char)*(s2 + count));
}
