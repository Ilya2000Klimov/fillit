/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iklimov <iklimov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 20:27:23 by iklimov           #+#    #+#             */
/*   Updated: 2019/11/14 20:28:02 by iklimov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int ft_sqrt_celing(int n)
{
	int x = n;
	int y = 1;
	while (x > y)
	{
		x = (x + y) / 2;
		y = n / x;
	}
	if (x * x != n)
		x++;
	return x;
} 

int main(int argc, char **argv) 
{
	if (argc == 2)
	{
		int n = atoi(argv[1]); 
		printf("root of %d is %d\n", n, squareRoot(n)); 
		//getchar();
	} 
}