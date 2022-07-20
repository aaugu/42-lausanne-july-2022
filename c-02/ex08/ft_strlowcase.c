char  *ft_strupcase(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
  {
    if (str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] += 32;
    }
    i++;
  }
  return (str);
}

#include <stdio.h>

int main(void)
{
  char  str1[] = "HELLO WORLD !";
  char  str2[] = "42 ANSWERS EVERYTHING";

  printf("%s\n", ft_strupcase(str1));
  printf("%s\n", ft_strupcase(str2));
}
