/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:58:56 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/22 17:11:07 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	prints by bits the char passed as param
*/

#include "libft.h"

void	ft_print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}
