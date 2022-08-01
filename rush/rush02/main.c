/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:44:53 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/30 22:20:16 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str);

int	main(int argc, char **argv)
{
	char	dico;

	dico = "numbers.dict";
	if (argc == 2)
	{
		if (ft_atoi(argv[1]) < 0)
			write(1, "Error\n", 6);
		else
			ft_write_nb(dico, argv[1]);
	}
	else if (argc == 3)
	{
		if (ft_atoi(argv[2]) < 0)
			write(1, "Error\n", sizeof("Error\n"));
		else
		{
			dico = argv[1];
			ft_write_nb(dico, argv[2]);
		}
	}
	else
		write(1, "Error\n", 6);
}
