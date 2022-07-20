#include <stdio.h>
#include <string.h>

char  *ft_strncat(char *dest, char *src, unsigned int nb)
{
  int i;
  unsigned int j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
  {
    i++;
  }
  while (src[j] != '\0' && j < nb)
  {
    dest[i] = src[j];
    i++;
    j++;
  }
  dest[i] = '\0';
  return (dest);
}

int main(void)
{
  char  src[] = "World";
  char  dest1[20] = "Hello ";
  char  dest2[20] = "Hello ";

  printf("%s\n", ft_strncat(dest1, src, 2));
  printf("%s", strncat(dest2, src, 2));
}
