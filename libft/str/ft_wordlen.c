/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 15:40:15 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/10 18:29:16 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	counts the size of the word ended by the delimeter passed as char c
*/

#include "libft.h"

size_t	ft_wordlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
