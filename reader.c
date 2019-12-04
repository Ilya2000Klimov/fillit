/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 14:14:33 by iklimov           #+#    #+#             */
/*   Updated: 2019/12/03 20:54:44 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <fcntl.h>

int	validate(char *buff, int b, t_tetris **tab)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (i < b)
	{
		if (i % 5 == 0 && buff[i] != '\n')
			return (0);
		else if (i == 21 && (buff[i] != '\n' || buff[i] != '\0'))
			return (0);
		else if ( buff[i] != '.' || buff[i] != '#')
			return (0);
		else if (buff[i] == '#')
			if (!tetradd(tab, i))
				return (0);
		i++;
	}
}

int	reader(int fd, t_tetris	**tab)
{
	int			bytesread = 21;
	char		buff[22];
	t_tetris	**tab;

	while(bytesread == 21)
	{
		bytesread = read(fd, buff, 21);
		if (validate(buff, bytesread, tab) == 0)
		{
			error(1);
			list_dell(tab);
			break;
		}
	}
}