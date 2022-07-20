int ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] < 32 || str[i] > 126)
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
  char  str2[] = "Hello world !\n";
  char  str3[] = "42 answers everything!";

  printf("%d\n", ft_str_is_printable(str1));
  printf("%d\n", ft_str_is_printable(str2));
  printf("%d\n", ft_str_is_printable(str3));
}
