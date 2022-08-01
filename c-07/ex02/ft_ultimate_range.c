/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:50:00 by aaugu             #+#    #+#             */
/*   Updated: 2022/08/01 21:13:22 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	if (min > max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *) malloc(sizeof(int) * (size));
	if (!*range)
		return (-1);
	while (i <= size)
	{
		*range[i] = min + i;
		i++;
	}
	return (size);
}

// 	range = (int **) malloc(sizeof(int *) * 1);
