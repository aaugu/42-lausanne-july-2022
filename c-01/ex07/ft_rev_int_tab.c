/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:05:01 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/18 15:00:35 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[5];	

	i = 0;
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	while (i <= 4)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_rev_int_tab(tab, 5);
	while (i <= 4)
	{
		printf("%d", tab[i]);
		i++;
	}
}
*/
