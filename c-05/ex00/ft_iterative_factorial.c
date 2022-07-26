#include <stdlib.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d", ft_iterative_factorial(atoi(argv[1])));
}
