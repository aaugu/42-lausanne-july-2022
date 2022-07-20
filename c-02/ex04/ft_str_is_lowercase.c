int ft_str_is_lowercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] < 'a' || str[i] > 'z')
    {
      return (0);
    }
    i++;
  }
  return (1);
}

#include <stdio.h>

int main(void)
{
  char  str1[] = "";
  char  str2[] = "Hello";
  char  str3[] = "hello";

  printf("%d\n", ft_str_is_lowercase(str1));
  printf("%d\n", ft_str_is_lowercase(str2));
  printf("%d\n", ft_str_is_lowercase(str3));
}
