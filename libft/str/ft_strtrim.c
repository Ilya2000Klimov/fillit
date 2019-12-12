/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:35:27 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/04 23:05:00 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	char	*trim;

	if (!s)
		return (NULL);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s);
	while (i > 0 && (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t'))
		i--;
	if (!(trim = malloc((i + 1) * sizeof(char))))
		return (NULL);
	trim = ft_strncpy(trim, s, (i));
	trim[i] = '\0';
	return (trim);
}
