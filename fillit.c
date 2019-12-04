/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:45:32 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/04 14:20:52 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int argc, char **argv)
{
    int			fd;
	int			n;
	t_tetris	*tab;

	if(argc == 2)
	{
		if((fd = open(argv[1], O_RDONLY)) == -1)
			error(ERR);
		n = ft_read(fd, tab);
		close(fd);
		if(n == -1 || n > 26)
			error(ERR);
		ft_solve(tab);
		tab_clear(*tab);
		free(tab);
	}
    else
        error(USE);
	return (0);
}