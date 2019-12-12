/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 14:29:19 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 00:41:26 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t k;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize <= i)
		return (ft_strlen(src) + dstsize);
	k = dstsize - i - 1;
	while (src[j] && k > 0)
	{
		dst[i + j] = src[j];
		j++;
		k--;
	}
	dst[i + j] = '\0';
	return (ft_strlen(src) + i);
}
