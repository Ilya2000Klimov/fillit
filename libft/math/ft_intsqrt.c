/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intsqrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:00:38 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/10 18:14:54 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Finds the whole squareroot of an int if it exists, otherwhise returns 0
*/

#include "libft.h"

int	ft_intsqrt(int nb)
{
	int root;

	root = 1;
	while (root * root < nb)
		root++;
	if (root * root == nb)
		return (root);
	return (0);
}
