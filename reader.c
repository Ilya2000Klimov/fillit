/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:14:33 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/06 22:26:37 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

t_tetris	*new_tetr(t_tetris *tab)
{
	int i;
	int j;

	t_tetris static *tail = NULL;
	t_tetris *new;
	if (!tail)
		tail = tab;
	if (tail == NULL)
		tail = malloc(sizeof(t_tetris));
	else
	{
		new = malloc(sizeof(t_tetris));
		tail->next = new;
		tail = tail->next;
	}
	tail->next = NULL;
	i = -1;
	while (++i < 2)
	{
		j = -1;
		while (++j < 4)
			tail->x[i][j] = -1;
	}
	return (tail);
}

int tetr_add(t_tetris *tab, int n)
{
	int i;
	int j;

	i = 0;
	while(tab->x[0][i] != -1)
		i++;
	if (i > 3)
		return (0);
	tab->x[0][i] = n % 5;
	tab->x[1][i] = n / 5;
	if (i == 3)
	{
		i = -1;
		while (++i < 4)
		{
			j = i;
			while (++j < 4 && !((tab->x[0][i] == tab->x[0][j] || tab->x[1][i] == tab->x[1][j]) && ((tab->x[0][i] - tab->x[0][j] == -1 || tab->x[0][i] - tab->x[0][j] == 1) || (tab->x[1][i] - tab->x[1][j] == -1 || tab->x[1][i] - tab->x[1][j] == 1))))
				printf("x[0][i] = %d, x[0][j] = %d\nx[1][i] = %d, x[1][j] = %d\n", tab->x[0][i], tab->x[0][j], tab->x[1][i], tab->x[1][j]);
			if (j == 4)
				return (0);
			else
				return (1);
		}
	}
	return (1);
}

int	validate(char *buff, int b, t_tetris *tab)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (i < b)
	{
		if (i % 5 == 4 && buff[i] != '\n')
			return (0);
		else if (i == 20 && (buff[i] != '\n' && buff[i] != '\0'))
			return (0);
		else if (i % 5 == 0 && i % 5 != 4 &&buff[i] != '.' && buff[i] != '#')
			return (0);
		else if (buff[i] == '#')
			if (!tetr_add(tab, i))
				return (0);
		i++;
	}
	return (1);
}

t_tetris	*reader(int fd)
{
	int			bytesread = 21;
	char		buff[22];
	t_tetris	*tab;
	t_tetris	*tail;


	while(bytesread == 21)
	{
		bytesread = read(fd, buff, 21);
		buff[bytesread] = '\0';
		tail = new_tetr(tab);
		if (validate(buff, bytesread, tail) == 0)
		{
			error(1);
			//list_dell(tab);
			break;
		}
	}
	return (tab);
}