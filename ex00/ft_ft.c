#include <stdio.h>
void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a;
    a =5;
    ft_ft(&a);
    printf("%d",a);
    return 0;
}