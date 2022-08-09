#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	i = 0;
	while (i <= (nb / 2) && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_sqrt(atoi(argv[1])));
}

