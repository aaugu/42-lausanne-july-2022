#include <stdio.h>
#include <unistd.h>

void  ft_strlen(char *str)
{
  int i;
  int count;

  i = 0;
  count = 0;
  while (str[i] != '\0')
  {
    count++;
    i++;
  }
  return count;
}

int main(void)
{
  char  str1[12] = "Hello World";
  char  str2[22] = "42 answers everything";

  printf("%d", ft_strlen(str1));
  printf("%d", ft_strlen(str2));
}
