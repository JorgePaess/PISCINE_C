/*Crie uma função que exiba 'N' ou 'P' dependendo do sinal do inteiro inserido como parâmetro. se n for negativo, exiba 'N'. Se n for positivo ou nulo, exiba 'P'*/

//Importamos a biblioteca que contém a função write
#include <unistd.h>
//Criamos a função de exibir caracteres
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Criamos a função que vai dizer se é negativo ou positivo
void ft_is_negative(int n)
{
    if (n < 0)
        ft_putchar('N');
    else
        ft_putchar('P');
}
//teste
int main(void)
{
    ft_is_negative(-1);

    return 0;
}
