/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:14:06 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/17 17:43:25 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_find(t_list *begin_list, void *content_ref, int (*cmp)())
{
	if (begin_list == NULL)
		return (NULL);
	if ((*cmp)(begin_list->content, content_ref) == 0)
		return (begin_list);
	else if (begin_list->next)
		return (ft_list_find(begin_list->next, content_ref, cmp));
	else
		return (NULL);
}
