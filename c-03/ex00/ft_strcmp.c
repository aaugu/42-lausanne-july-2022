/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:50:25 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/21 15:08:22 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <string.h>
#include <stdio.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	char	s3[] = "Hello World";
	
	printf("%d\n", strcmp(s1, s2));
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%s", "-----\n"); 
	printf("%d\n", strcmp(s1, s3));
	printf("%d\n", ft_strcmp(s1, s3));
	printf("%s", "-----\n");
	printf("%d\n", strcmp(s3, s1));
	printf("%d\n", ft_strcmp(s3, s1));
}
*/
