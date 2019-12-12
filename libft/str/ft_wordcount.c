/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 15:38:33 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/09 21:53:40 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	size_t	ft_wordcount(char const *s, char c)
**	{
**	size_t i;
**
**	i = 0;
**	while (*s)
**	{
**		while (*s != c && *s)
**			s++;
**		if (*s == c && *s)
**			i++;
**		while (*s == c && *s)
**			s++;
**	}
**	return (i);
**	}
*/

#include "libft.h"

size_t			ft_wordcount(char const *s, char c)
{
	size_t i;
	size_t n;

	i = 0;
	while (*s)
	{
		s = ft_skip(s, c);
		n = ft_wordlen(s, c);
		if (!n)
			return (i);
		i++;
		s += n;
	}
	return (i);
}
