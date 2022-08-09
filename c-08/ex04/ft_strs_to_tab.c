/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaugu <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 16:41:42 by aaugu             #+#    #+#             */
/*   Updated: 2022/08/03 19:02:39 by aaugu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

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

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = ft_strlen(src);
	dest = malloc(sizeof(*src) * (size + 1));
	if (!dest)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	tab = malloc(sizeof(*tab) * (ac + 1));
	if (!tab)
	{
		tab = NULL;
		return (tab);
	}
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
/*
int	main(void)
{
	t_stock_str		*tab_struct;
	int				ac = 3;
	char			*av[3];
	char			*str0 = "Hello";
	char			*str1 = "world";
	char    		*str2 = "!";

	av[0] = str0;
	av[1] = str1;
	av[2] = str2;
	tab_struct = ft_strs_to_tab(ac, av);
	ft_show_tab(tab_struct);
	free(tab_struct);
}
*/