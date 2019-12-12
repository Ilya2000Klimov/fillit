/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:28:52 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/17 17:47:24 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == NULL)
		return (NULL);
	while (nbr-- > 1)
	{
		if (begin_list->next == NULL)
			return (NULL);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
