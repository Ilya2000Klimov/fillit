/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:34:43 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/09 22:10:52 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	char	*ft_getnextword(char *str, char c)
**	{
**		while (*str != c)
**			str++;
**		while (*str == c)
**			str++;
**		return (str);
**	}
**
**	char	**ft_strsplit(char const *s, char c)
**	{
**		char	*str;
**		size_t	i;
**		size_t	counter;
**		char	**arr;
**
**		if (!s || !c)
**			return (NULL);
**		str = (ft_strtrimchar(s, c));
**		i = (ft_wordcount(s, c));
**		if (!(arr = malloc(i * sizeof(char*))))
**			return (NULL);
**		counter = 0;
**		while (i > counter)
**		{
**			arr[counter++] = ft_strsub(str, 0, ft_wordlen(str, c));
**			str = ft_getnextword(str, c);
**		}
**		return (arr);
**	}
*/

#include "libft.h"

char					**ft_strsplit(char const *s, char c)
{
	char	**arrstr;
	size_t	i;
	size_t	n;
	size_t	m;

	if (s)
	{
		i = -1;
		n = ft_wordcount(s, c);
		if ((arrstr = (char **)ft_memalloc((n + 1) * sizeof(char *))))
		{
			while (++i < n)
			{
				s = ft_skip(s, c);
				m = ft_wordlen(s, c);
				arrstr[i] = ft_strnew(m);
				arrstr[i] = ft_strncpy(arrstr[i], s, m);
				s += m;
			}
			return (arrstr);
		}
	}
	return (NULL);
}
