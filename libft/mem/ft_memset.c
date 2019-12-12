/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 12:19:49 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 00:31:37 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char ch;
	unsigned	char *str;

	str = (unsigned char *)b;
	ch = (unsigned char)c;
	while (len)
	{
		str[(len - 1)] = ch;
		len--;
	}
	return (void *)b;
}
