/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:31:41 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/09 17:12:09 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		sign;

	sign = 1;
	size = (ft_intlength(n));
	if (!(str = (char *)malloc((size + 1) * sizeof(char))))
		return (NULL);
	if (n < 0)
	{
		*str = '-';
		sign = -1;
	}
	str[size] = '\0';
	if (n == 0)
		*str = 48;
	while (n != 0)
	{
		str[--size] = ((n % 10) + (48 * sign)) * sign;
		n = n / 10;
	}
	return (str);
}
