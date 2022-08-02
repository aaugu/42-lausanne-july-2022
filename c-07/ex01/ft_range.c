/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:09:37 by aaugu             #+#    #+#             */
/*   Updated: 2022/08/02 16:21:53 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		tab = 0;
		return (tab);
	}
	size = max - min;
	tab = malloc(sizeof(int) * (size));
	if (!tab)
		return (NULL);
	while (i <= size)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int	*tab;
	int	i;

	(void) argc;
	i = 0;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (tab == NULL)
		printf("Pointer is NULL");
	else
	{
		while (tab[i] < atoi(argv[2]))
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	free(tab);
}
*/