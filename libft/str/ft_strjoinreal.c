/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinreal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 22:57:37 by iklimov           #+#    #+#             */
/*   Updated: 2019/11/01 18:36:20 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strrealjoin: like ft_strjoin but instead of allocate a new char
**				   it reallocate s1
*/

#include "libft.h"

char	*ft_strjoinreal(char **s1, char *s2)
{
	char		*out;
	const int	l1 = ft_strlen(*s1 ? *s1 : "");
	const int	l2 = ft_strlen(s2);

	if (!(out = malloc(l1 + l2 + 1)))
		return (NULL);
	ft_memcpy(out, *s1 ? *s1 : "", l1);
	ft_memcpy((out + l1), s2, l2);
	out[l1 + l2] = '\0';
	free(*s1);
	*s1 = NULL;
	return (out);
}
