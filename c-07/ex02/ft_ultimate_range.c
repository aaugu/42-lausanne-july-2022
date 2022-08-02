/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:50:00 by aaugu             #+#    #+#             */
/*   Updated: 2022/08/02 16:21:52 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * (size));
	if (!*range)
		return (-1);
	while (i <= size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int	main(int argc, char **argv)
{
	int	*range;
	int	size;
	int	i;

	(void) argc;
	i = 0;
	size = ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	printf("Size : %d\n", size);
	if (range == NULL)
		printf("Pointer is NULL");
	else
	{
		while (range[i] < atoi(argv[2]))
		{
			printf("%d\n", range[i]);
			i++;
		}
	}
	free(range);
}
*/