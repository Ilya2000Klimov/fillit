/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:48:40 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/06 20:09:21 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft/libft.h"

typedef struct		s_tetris
{
	int				x[2][4];
	struct s_tetris	*next;
}					t_tetris;

void				error(int i);
t_tetris			*reader(int fd);

#endif
