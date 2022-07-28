/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:05:32 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/18 15:26:36 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	while (j <= size - 1)
	{
		while (i <= size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		i = 0;
		j++;
	}
}
/*
int	main(void)
{
	int	i;
	int	tab[5];

	i = 0;
	tab[0] = 9;
	tab[1] = 3;
	tab[2] = 5;
	tab[3] = 0;
	tab[4] = 8;
	while (i <= 4)
	{
		printf("%d", tab[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_sort_int_tab(tab, 5);
	while (i <= 4)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
