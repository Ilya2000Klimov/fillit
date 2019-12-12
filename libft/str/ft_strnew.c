/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 08:45:14 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/09 17:13:33 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t n)
{
	char	*s;

	if (!(s = ft_memalloc((n + 1) * sizeof(char))))
		return (NULL);
	ft_bzero(s, n);
	return (s);
}
