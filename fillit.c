/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:45:32 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/07 17:10:16 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
    int			fd;
	int			n;
	t_tetris	*tab;

	if(argc == 2)
	{
		if((fd = open(argv[1], O_RDONLY)) == -1)
			error(2);
		tab = reader(fd);
		close(fd);
		int i = 0;
		while (tab)
		{
			i++;
			printf("figure # %d\nx -> [%d, %d, %d, %d]\ny -> [%d, %d, %d, %d]\n\n", i, tab->x[0][0], tab->x[0][1], tab->x[0][2], tab->x[0][3] , tab->x[1][0], tab->x[1][1], tab->x[1][2], tab->x[1][3]);
			tab = tab->next;
		}
		//ft_solve(tab);
		//tab_clear(*tab);
		//free(tab);
	}
    else
        error(1);
	printf("argc = %d\n", argc);
	return (0);
}