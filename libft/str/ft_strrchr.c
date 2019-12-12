/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 03:01:57 by iklimov           #+#    #+#             */
/*   Updated: 2019/09/26 00:38:11 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t len;

	len = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)(s + len));
	while (len--)
	{
		if (s[len] == c)
			return ((char *)(s + len));
	}
	return (NULL);
}
