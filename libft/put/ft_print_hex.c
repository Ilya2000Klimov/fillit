/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:58:11 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/10 18:17:57 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	prints an int in hex with lowercase letters a-f cerving as 11-15
*/

#include "libft.h"

void	ft_print_hex(size_t nb)
{
	char	*str;

	str = "0123456789abcdef";
	if (nb >= 16)
		ft_print_hex(nb / 16);
	ft_putchar(str[nb % 16]);
}
