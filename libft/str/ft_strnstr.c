/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 17:32:14 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/08 17:35:01 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;

	if (*needle)
	{
		n = ft_strlen(needle);
		while (ft_strncmp(haystack, needle, n) && n <= len && len-- &&
															*haystack)
			haystack++;
		if (!*haystack || !len || n > len)
			return (NULL);
	}
	return ((char*)haystack);
}
