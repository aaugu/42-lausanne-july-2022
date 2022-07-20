char  *ft_strupcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32;
    }
    i++;
  }
  return (str);
}

#include <stdio.h>

int main(void)
{
  char  str1[] = "Hello World !";
  char  str2[] = "42 ANSWERS Everything";

  printf("%s\n", ft_strupcase(str1));
  printf("%s\n", ft_strupcase(str2));
}
