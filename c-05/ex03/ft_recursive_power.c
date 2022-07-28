/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 18:26:11 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/28 14:14:16 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
}
