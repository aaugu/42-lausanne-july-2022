/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:10:40 by aaugu             #+#    #+#             */
/*   Updated: 2022/07/30 22:26:02 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

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

int	line_count(int fd)
{
	int		count;
	char	buf[1];

	count = 0;
	while (read(fd, buf, 1))
	{
		if (buf[0] == '\n')
			count++;
	}
	return (count);
}

char	ft_parse_nb(int fd, int line_count)
{
	char	**tab;
	char	buf[1];
	int		i;
	int		j;

	i = 0;
	j = 0;
	*tab = malloc(sizeof(char) * (line_count + 1));
	if (!*tab)
		return (NULL);
	while (read(fd, buf, 1))
	{

	}
}
/*
char	ft_parse_letters(int fd, int line_count)
{

}
*/

int	main(void)
{
	printf("%d\n", line_count(open("numbers.dict", O_RDONLY)));
	return (0);
}
