/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:40:16 by iklimov           #+#    #+#             */
/*   Updated: 2019/11/01 17:51:16 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*str;

	i = ft_strlen(s1);
	if (!(str = (char *)malloc((i + 1) * sizeof(char))))
		return (NULL);
	str = ft_strcpy(str, s1);
	return (str);
}
