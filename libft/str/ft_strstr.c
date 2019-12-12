/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 13:58:56 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 09:57:34 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t len;

	if (!*needle)
		return ((char*)haystack);
	len = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, len) == 0)
			return ((char*)haystack);
		haystack++;
	}
	return (NULL);
}
