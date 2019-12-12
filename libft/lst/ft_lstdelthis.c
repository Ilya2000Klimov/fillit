/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelthis.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 19:38:12 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/18 19:57:43 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelthis(t_list **alst)
{
	t_list	*temp;

	temp = (*alst)->next;
	free((**alst).content);
	(**alst).content_size = 0;
	free(*alst);
	*alst = temp;
}
