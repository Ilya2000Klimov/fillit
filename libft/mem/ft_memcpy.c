/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 17:21:11 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 00:30:49 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;

	if (dst == src)
		return (dst);
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	while (n--)
		*(dst_p++) = *(src_p++);
	return (void *)dst;
}
