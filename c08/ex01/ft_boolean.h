/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbowen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 22:04:19 by rbowen            #+#    #+#             */
/*   Updated: 2021/02/27 18:41:49 by rbowen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define SUCCESS		0
# define TRUE			1
# define FALSE			0
# define EVEN(nbr)		(nbr % 2 == 0) ? TRUE : FALSE
# define EVEN_MSG		"I have an even number of arguments."
# define ODD_MSG		"I have an odd number of arguments."

typedef	int				t_bool;
#endif
