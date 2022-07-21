#include <stdio.h>
#include <string.h>
/*
char	is_matching()

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
}
*/
int	main(void)
{
	char	str[] = "Hello World Woohoo!";
	char	to_find[] = "World";
	char	to_find1[] = "42";
	char	to_find2[] = "";
	char	to_find3[] = "Woo";
	char	str1[] = "";
	char	to_find4[] = "";

//	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	printf("%s\n", "-----");
//	printf("%s\n", ft_strstr(str, to_find1));
	printf("%s\n", strstr(str, to_find1));
	printf("%s\n", "-----");
//	printf("%s\n", ft_strstr(str, to_find2));
	printf("%s\n", strstr(str, to_find2));
	printf("%s\n", "-----");
//	printf("%s\n", ft_strstr(str, to_find3));
	printf("%s\n", strstr(str, to_find3));
	printf("%s\n", "-----");
//	printf("%s\n", ft_strstr(str1, to_find4));
	printf("%s\n", strstr(str1, to_find4));
}
