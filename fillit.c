/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:45:32 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/06 20:35:58 by iklimov          ###   ########.fr       */
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
		//ft_solve(tab);
		//tab_clear(*tab);
		//free(tab);
	}
    else
        error(1);
	printf("argc = %d\n", argc);
	return (0);
}