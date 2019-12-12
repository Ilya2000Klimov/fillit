/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 21:46:43 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/10 18:19:31 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	skips the character passed as param and return memory adress of the firs
**	differen character
*/

#include "libft.h"

const char	*ft_skip(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}
