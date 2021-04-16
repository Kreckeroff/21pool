/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dweeper <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:39:11 by dweeper           #+#    #+#             */
/*   Updated: 2021/03/10 17:35:40 by dweeper          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct			s_point
{
	int					x;
	int					y;
	struct s_point		*next;
}						t_point;

void					add_point(t_point **array, int x, int y);
void					add2start(t_point **array, int width, int heigth);
void					find_this_guy(t_point **array, char print_im[3]);
t_point					*new_point(int x, int y);
void					struct_clear(t_point **array);
void					ft_clear_argv(void);
int						ft_check_w_h(int *width, int *height, int *temp);
int						ft_strlen(void);
int						ft_check_argv(void);
void					ft_print_error_file(int argc);
int						ft_atoi(char *str);
int						ft_check_map(char buff, int heigth,
		int width, t_point **array);
int						ft_read_file_loop(int fd, int argv_heigth,
		t_point **array);
int						ft_read_file(int fd, int argv_heigth, t_point **array);
void					ft_read_argv(int fd);

#endif
