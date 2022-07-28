/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:33:39 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/28 14:12:35 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = nb;
	if (nb < 0)
		return (0);
	if (nb > 1)
		result *= ft_recursive_factorial(nb - 1);
	return (result);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_recursive_factorial(atoi(argv[1])));
}
*/