/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 10:48:21 by aaugu             #+#    #+#             */
/*   Updated: 2022/08/04 16:14:03 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_iscs(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}
/*
int	ft_count_chars(char *str, char *charset)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_iscs(str[i], charset) == 0)
		{
			count++;

		}
		i++;
	}
	return (count);
}
*/

int	ft_count_words(char *str, char *cs)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_iscs(str[i], cs) == 1 \
			&& ft_iscs(str[i + 1], cs) == 0 \
			&& i < ft_strlen(str) - 1)
			count++;
		i++;
	}
	return (count);
}
/*
char	**ft_split(char *str, char *charset)
{
	char	**str_split;

	*str_split = malloc(sizeof(char *) * (count_words + 1));
}
*/

int	main(void)
{
	char	str[15] = "Hello,world,!,";
	char	charset[2] = ",";

	printf("%d\n", ft_count_chars(str, charset));
	printf("%d\n", ft_count_words(str, charset));
}
