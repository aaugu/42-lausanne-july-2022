/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 09:44:05 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/27 15:55:52 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
#include <stdlib.h>
#include <stdio.h>
*/
void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb >= 0 && nb < 10)
		ft_putchar(nb + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
/*
int	main(int argc, char **argv)
{	
	(void) argc;
	ft_putnbr(atoi(argv[1]));
	ft_putchar('\n');
}
*/