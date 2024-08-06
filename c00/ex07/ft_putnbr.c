/*Crie uma função que exiba o número inserido como parâmetro. A função deve ser capaz de exibir 
todos os valores possíveis dentro de uma variável do tipo int*/

//Biblioteca que contém a função write
#include <unistd.h>
//Função que imprime um caractere
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Função para imprimir um número inteiro 'nb'
void ft_putnbr(int nb)
{
    int temp;
    int size;

    size = 1;
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb == -2147483648)
    {
        ft_putchar('2');
        nb = 147483648;
    }
    temp = nb;
    while ((temp /= 10) > 0)
        size *= 10;
    temp = nb;
    while (size)
    {
        ft_putchar((char)((temp / size) + 48));
        temp %= size;
        size /= 10;
    }

}
//teste
int main(void)
{
    ft_putnbr(345);

    return 0;
}
