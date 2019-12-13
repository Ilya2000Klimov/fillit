/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:45:32 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/12 20:04:30 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

t_tetris	*reader(int fd, int *n)
{
	int			bytesread;
	char		buff[22];
	t_tetris	*tab;
	t_tetris	*tail;

	tab = NULL;
	bytesread = 21;
	while (bytesread == 21)
	{
		bytesread = read(fd, buff, 21);
		buff[bytesread] = '\0';
		tail = new_tetr(&tab);
		if ((++(*n)) && validate(buff, bytesread, tail) == 0)
		{
			error(1);
			list_dell(&tab);
			break ;
		}
	}
	return (tab);
}

void		ft_solve(t_tetris *node, int n)
{
	while (!ft_backtrack(ft_create_map(n), node, n))
		n++;
}

int			main(int argc, char **argv)
{
	int			fd;
	int			n;
	t_tetris	*tab;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			error(2);
		n = 0;
		tab = reader(fd, &n);
		if (n > 26)
			error(1);
		close(fd);
		ft_solve(tab, ft_isqrtc(n * 4));
		list_dell(&tab);
	}
	return (0);
}
