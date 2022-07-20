int ft_str_is_uppercase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] < 'A' || str[i] > 'Z')
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
  char  str2[] = "HELLO";
  char  str3[] = "Hello";

  printf("%d\n", ft_str_is_uppercase(str1));
  printf("%d\n", ft_str_is_uppercase(str2));
  printf("%d\n", ft_str_is_uppercase(str3));
}
