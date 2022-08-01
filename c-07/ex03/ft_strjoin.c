/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:50:41 by aaugu             #+#    #+#             */
/*   Updated: 2022/08/01 22:34:52 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		ft_strs_len(char **strs, int size);
char	*ft_concat(char **strs, char *sep, char *strcat, int size);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*strscat;
	int		s_sep;
	int		s_strs;

	if (size == 0)
	{
		strscat = malloc(sizeof(char) * 1);
		strscat[0] = '\0';
		return (strscat);
	}
	s_sep = ft_strlen(sep);
	s_strs = ft_strs_len(strs, size);
	strscat = malloc(sizeof(*strscat) * ((s_sep * (size - 1)) + s_strs + 1));
	if (!strscat)
		return (NULL);
	strscat = ft_concat(strs, sep, strscat, size);
	return (strscat);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strs_len(char **strs, int size)
{
	int		i;
	int 	j;
	int		count;
	char	*str;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		str = strs[i];
		while (str[j] != '\0')
		{
			count++;
			j++;
		}
		j = 0;
		i++;
	}
	return (count);
}

char	*ft_concat(char **strs, char *sep, char *strcat, int size)
{
	int	i;
	int	j;
	int	k;
	char *str;

	i = 0;
	k = 0;
	while (i < size)
	{
		str = strs[i];
		j = 0;
		while (str[j] != '\0')
		{
			strcat[k++] = str[j++];
		}
		j = 0;
		if (i == size - 1)
			break ;
		while (sep[j] != '\0')
		{
			strcat[k++] = sep[j++];
		}
		i++;
	}
	return (strcat);
}

int	main(void)
{
	char	*strs[3];
	char	sep[2] = " ";
	int		size = 3;

	char *str0 = "Hello";
	char *str1 = "world";
	char *str2 = "!";

	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;

	printf("%s\n", ft_strjoin(size, strs, sep));
}
