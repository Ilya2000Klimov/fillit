/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 02:06:38 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/09 17:11:42 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n--)
		if (!(*(unsigned char *)s1++ == *(unsigned char *)s2++))
			return (*((unsigned char *)--s1) - *((unsigned char *)--s2));
	return (0);
}
