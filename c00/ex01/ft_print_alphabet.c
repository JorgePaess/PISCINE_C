/*Crie uma função que exiba o alfabeto em letras minúsculas, em uma única linha, por
ordem crescente, começando pela letra ‘a’.*/

//Biblioteca para usar a função write
#include <unistd.h>
//Função que exibe os caracteres
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Função que exibe o alfabeto
void ft_print_alphabet(void)
{
    char letra;
    letra = 'a';
    while (letra <= 'z')
    {
        ft_putchar(letra);
        letra++;
    }
}
//teste
int main(void)
{
    ft_print_alphabet();
    return 0;
}
