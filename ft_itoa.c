#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_size(int nbr)
{
	int size;

	size = 0;
	while (nbr /= 10)
		size++;
	return (size);
}

char  *ft_itoa(int nbr)
{
	int		size;
	char	*str;

	size = ft_size(nbr);
	if (nbr < 0)
		size++;
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size + 1] = '\0';
	if (nbr == 0)
		str[0] = '0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr != 0)
	{
		str[size] = nbr % 10 + '0';
		nbr /= 10;
		size--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", ft_itoa(atoi(argv[1])));
}
