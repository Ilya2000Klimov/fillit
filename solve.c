/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skrasin <skrasin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 17:26:29 by skrasin           #+#    #+#             */
/*   Updated: 2019/12/10 01:29:54 by skrasin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_find(char *map, int *a, int n)
{
	while (*a < n * n)
			if (map[(*a++)] == '\0')
				return (a);
	return (-1);
}

void	ft_create_map(char **map, int n)
{
	*map = (char *)ft_memalloc(n * n * sizeof(char *));
}

int		ft_put_tetr(t_tetris node, int n, char *map)
{
	int a;
	int	i;
	int	j;

	a = 0;
	i = a;
	j = i;
	if (ft_find(map, a, n) == -1)
		return (0);
	while (i < 4)
	{
		if (a / n < node.x[0][i])
		{

		}
		else
		{
			
		}
	}
	
	return (1);
}
