/*Crie uma função que receba um ponteiro para int como parâmetro e defina o valor "42"
para aquele int*/
#include <stdio.h>

void ft_ft(int *numb)
{
    *numb = 42;
}
//teste
int main(void)
{
    int i;

    i = 21;

    ft_ft(&i);

    return 0;
}
