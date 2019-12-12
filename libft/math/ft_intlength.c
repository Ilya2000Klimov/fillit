/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 15:44:57 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/10 18:14:59 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	The function counts the size of the integer
*/

#include "libft.h"

int		ft_intlength(int n)
{
	int	i;
	int sign;

	i = 0;
	sign = 0;
	if (n <= 0)
		sign = 1;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i + sign);
}
