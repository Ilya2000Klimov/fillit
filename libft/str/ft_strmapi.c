/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:33:49 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/03 13:41:40 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*n;

	if (s && *s && f)
	{
		i = 0;
		if (!(n = ft_strnew(ft_strlen(s))))
			return (NULL);
		while (*s)
		{
			n[i] = f(i, *s++);
			i++;
		}
		return (n);
	}
	return (NULL);
}
