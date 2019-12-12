/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrimchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:36:20 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/10 18:22:09 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	trims off the characters passed as the param and eturns a fresh string
**	without the exxess characters.
*/

#include <libft.h>

char	*ft_strtrimchar(char const *s, char c)
{
	size_t	i;
	char	*trim;

	if (!s)
		return (NULL);
	while (*s == c)
		s++;
	i = ft_strlen(s);
	while (i > 0 && s[i - 1] == c)
		i--;
	if (!(trim = malloc((i + 1) * sizeof(char))))
		return (NULL);
	trim = ft_strncpy(trim, s, i);
	trim[i + 1] = '\0';
	return (trim);
}
