/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:48:40 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/12 02:31:02 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"
#include <stdio.h>

typedef struct		s_tetris
{
	int				x[2][4];
	struct s_tetris	*next;
}					t_tetris;

void				error(int i);
t_tetris			*reader(int fd, int *n);
unsigned int	ft_isqrtc(int n);
void	ft_solve(t_tetris *node, int n);

#endif
