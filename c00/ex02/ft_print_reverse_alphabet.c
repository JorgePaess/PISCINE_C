/*Crie uma função que exiba o alfabeto em letras minúsculas, em uma única linha, por
ordem decrescente, começando pela letra ‘z’.*/

//Biblioteca da função write
#include <unistd.h>
//Função que escreve um caractere
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Função para escrever o alfabeto ao contrario
void ft_print_reverse_alphabet(void)
{
    char letra;
    letra = 'z';

    while (letra >= 'a')
    {
        ft_putchar(letra);
        letra--;
    }
}
//teste
int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
