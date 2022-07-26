/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:29:37 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/18 14:05:01 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	if (y != 0)
	{
		*a = x / y;
		*b = x % y;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 13;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n%d", a, b);
}
*/
