/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:26:29 by skrasin           #+#    #+#             */
/*   Updated: 2019/12/12 01:44:12 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_create_map(int n)
{
	char *map;
	size_t	l;

	l = n * n * sizeof(char *);
	if (!(map = (char *)ft_memalloc(l)))
		return (NULL);
	map = ft_memset(map, '.', l - 1);
	map[l] = '\0';
	return (map);
}

int		ft_put_tetr(t_tetris node, int n, char *map, char c, int i)
{
	int j;

	j = -1;
	while (map[++i] != '\0')
	{
		if (map[i] == '.')
			while (++j < 4)
				if (node.x[0][j] + i % n > 4 || node.x[1][j] + i / n > 4)
					break;
		j = -1;
	}
	if (map[i] == '\0')
		return (0);
	while (++j < 4)
		map[i + node.x[0][j] + n * node.x[1][j]] = c;
	return (i);
}

void	ft_free_c(char *map, t_tetris node, int i, int n) //write ft_mapsetchar()
{
	int j;

	j = -1;
	while (++j < 4)
		map[i + node.x[0][j] + n * node.x[1][j]] = '.';
}

int		ft_backtrack(char *map, t_tetris *node, int n, char c)
{
	int i;
	int l;

	i = -1;
	l = n * n;
	if (node == NULL)
		return(1); //print
	if (ft_put_tetr(*node, n, map, c, i))
		while (!ft_backtrack(map, node->next, n, ++c) && i < l)
		{
			ft_free_c(map, *node, i, n);
			ft_put_tetr(*node, n, map, c, i);
		
		}
	else
		return (0);
	return(1);
}


void	ft_solve(t_tetris *node, int n)
{
	while(!ft_backtrack(ft_create_map(n), node, n, 'A'))
		n++;
}
