/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:45:32 by iklimov           #+#    #+#             */
/*   Updated: 2019/11/08 14:15:28 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int main(int ac, char **av)
{
    int			fd;
	int			n;
	t_tetris	**tab;

	if(ac == 2)
	{
		if((fd = open(av[1], O_RDONLY)) == -1)
			err(ERR);
		n = ft_read(fd, tab);
		close(fd);
		if(n == -1 || n > 26)
			err(ERR);
		if((fd = open(av[1], O_RDONLY)) == -1)
			err(ERR);
		if((tab = malloc(sizeof(t_piece *) * (n + 1))) == NULL)
			err(ERR);
		if(tab_fill(fd, tab, 0, 0) == -1)
		{
			tab_clear((void **)tab);
			err(ERR);
		}
		tab[n] = NULL;
		ft_solve(tab, ft_root(n * 4), n);
		tab_clear((void **)tab);
		free(tab);
	}
    else
        err(USE);
	return (0);
}