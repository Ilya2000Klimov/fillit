/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 19:43:23 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 00:29:20 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	while (n--)
	{
		*ptr_dst = *ptr_src;
		if (*ptr_dst == (unsigned char)c)
			return ((void*)(++ptr_dst));
		ptr_dst++;
		ptr_src++;
	}
	return (NULL);
}
