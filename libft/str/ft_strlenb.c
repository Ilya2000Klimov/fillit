/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenb.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:48:03 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/22 17:24:47 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	/*
	**	using bits to find out where the string has the /0 char
	**	DOES NOT WORK
	**	DOES NOT PASS NORM
	**	DO NOT USE!!!
	*/

	const char				*char_ptr;
	const unsigned long int	*longword_ptr;
	unsigned long int		longword;
	unsigned long int		himagic;
	unsigned long int		lomagic;

	char_ptr = str;
	while (((unsigned long int)char_ptr & (sizeof(longword) - 1)) != 0)
	{
		//printf("%d\n", ((unsigned long int)char_ptr & (sizeof(longword) - 1)));
		if (*char_ptr == '\0')
			return (char_ptr - str);
			//printf("%c\n", *char_ptr);
		++char_ptr;
	}
	longword_ptr = (unsigned long int *)char_ptr;
	himagic = 0x80808080L;
	lomagic = 0x01010101L;
	if (sizeof(longword) > 4)
	{
		himagic = ((himagic << 32) << 16) | himagic;
		lomagic = ((lomagic << 32) << 16) | lomagic;
	}
	if (sizeof(longword) > 8)
		return (0);
	while (1)
	{
		//printf("%lu\n", *longword_ptr);
		longword = *longword_ptr++;
		if (((longword - lomagic) & ~longword & himagic) != 0)
		{
			const char *cp = (const char *)(longword_ptr - 1);
			if (cp[0] == 0)
				return (cp - str);
			if (cp[1] == 0)
				return (cp - str + 1);
			if (cp[2] == 0)
				return (cp - str + 2);
			if (cp[3] == 0)
				return (cp - str + 3);
			if (sizeof(longword) > 4)
			{
				if (cp[4] == 0)
					return (cp - str + 4);
				if (cp[5] == 0)
					return (cp - str + 5);
				if (cp[6] == 0)
					return (cp - str + 6);
				if (cp[7] == 0)
					return (cp - str + 7);
			}
		}
	}
}

// int main()
// {
// 	char *s = "12345678901234567890123467890";
// 	ft_strlen(s);
// }
