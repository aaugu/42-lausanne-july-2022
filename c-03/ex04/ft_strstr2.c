#include <stdio.h>
#include <string.h>

// to change it

char	is_matching(char *str, char *to_find, int i)
{
  int j;

  j = 0;
  while (to_find[j] != '\0')
  {
    if (to_find[j] == str[i + j])
      j++;
    else
      return (0);
  }
  return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	i = 0;
  if (to_find[0] == '\0')
  {
    return (str);
  }
  while (str[i] != '\0')
  {
    if (str[i] == to_find[0])
    {
      if (is_matching(str, to_find, i))
      {
        return &str[i];
      }
    }
    i++;
  }
  return (0);
}

int	main(void)
{
	char	str[] = "Hello World Woohoo!";
	char	to_find[] = "World";
//	char	to_find1[] = "42";
	char	to_find2[] = "";
	char	to_find3[] = "Woo";
	char	str1[] = "";
	char	to_find4[] = "";

  printf("%s\n", strstr(str, to_find));
	printf("%s\n", ft_strstr(str, to_find));
/*	printf("%s\n", "-----");
	printf("%s\n", ft_strstr(str, to_find1));
	printf("%s\n", strstr(str, to_find1));*/
	printf("%s\n", "-----");
  printf("%s\n", ft_strstr(str, to_find2));
	printf("%s\n", strstr(str, to_find2));
	printf("%s\n", "-----");
	printf("%s\n", ft_strstr(str, to_find3));
	printf("%s\n", strstr(str, to_find3));
	printf("%s\n", "-----");
	printf("%s\n", ft_strstr(str1, to_find4));
	printf("%s\n", strstr(str1, to_find4));
}
