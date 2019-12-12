/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_findsize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:23:05 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/17 17:44:12 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_findsize(t_list *begin_list, int s)
{
	if (begin_list == NULL)
		return (NULL);
	if ((begin_list->content_size - s) == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_findsize(begin_list->next, s));
	else
		return (NULL);
}
