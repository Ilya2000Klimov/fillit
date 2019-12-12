/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 15:32:59 by iklimov           #+#    #+#             */
/*   Updated: 2019/10/08 17:19:35 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", STDOUT_FILENO);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', STDOUT_FILENO);
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, STDOUT_FILENO);
		ft_putnbr_fd(n % 10, STDOUT_FILENO);
	}
	else
	{
		ft_putchar_fd(n + 48, STDOUT_FILENO);
	}
}
