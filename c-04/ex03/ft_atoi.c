#include <stdlib.h>
#include <stdio.h>

int		ft_checkoperators(char *str, int i, int minus);
int		ft_result(char *str, int i, int j);
int		ft_isnegative(int minus);

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (result * sign);
		else
			result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(void)
{
	char    str1[] = "  ---+--+1234ab567";

	printf("%d\n", ft_atoi(str1));
}
