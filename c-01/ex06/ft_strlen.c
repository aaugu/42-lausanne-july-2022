/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 12:03:19 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/18 15:45:50 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
/*
int	main(void)
{
	char	str1[12] = "Hello World";
	char	str2[22] = "42 answers everything";

	printf("%d\n%d", ft_strlen(str1), ft_strlen(str2));
}*/
