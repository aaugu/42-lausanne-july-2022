#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a;
    int b;

    a = 42;
    b = 51;
    ft_swap(&a, &b);
    printf("%d\n%d", a, b);
    return (0);
}