/*Crie uma função que troque o valor de dois inteiros cujos endereços são inseridos
como parâmetros.*/

//biblioteca para o printf
#include <stdio.h>

//criamos a função
void ft_swap(int *a, int *b)
{
    int temp; //variavel temporaria para realizar a troca
    //troca troca de endereço
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d e b = %d",*a, *b);
}

//teste
int main(void)
{
    //definido variaveis para a troca
    int a = 21;
    int b = 42;

    ft_swap(&a, &b); //eu chamo a função swap e passo o endereço das variaveis usando '&'

    return 0;
}
