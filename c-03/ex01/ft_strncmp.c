/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:42:35 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/26 09:41:36 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Hello !";
	char	s2[] = "Hello World";

	printf("%d\n", strncmp(s1, s2, 4));
	printf("%d\n", ft_strncmp(s1, s2, 4));
	printf("%s", "-----\n");
	printf("%d\n", strncmp(s1, s2, 7));
	printf("%d\n", ft_strncmp(s1, s2, 7));
	printf("%s", "-----\n");
	printf("%d\n", strncmp(s2, s1, 0));
	printf("%d\n", ft_strncmp(s2, s1, 0));
}
*/