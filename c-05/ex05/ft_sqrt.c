#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
	float	sqrt;
	float	temp;

	if (nb < 0)
		return (0);
	sqrt = nb / 2;
	temp = 0;
	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = ((nb / temp) + temp) / 2;
	}
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("%d\n", ft_sqrt(atoi(argv[1])));
}
*/
