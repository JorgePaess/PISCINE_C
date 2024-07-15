/*crie uma função que exiba todas as diferentes combinações de dois dígitos entre 00 e 99, 
listadas em ordem crescente*/

//Importamos a biblioteca da função write
#include <unistd.h>
//Função que exibe um caractere
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Função que combina dois digitos entre 00 e 99
void ft_print_comb2(void)
{
    int i;
    int k;

    i = 0;
    k = 0;
    while (i < 100)
    {
        k = i + 1;
        while (k < 100)
        {
            ft_putchar(i / 10 + '0');
            ft_putchar(i % 10 + '0');
            ft_putchar(' ');
            ft_putchar(k / 10 + '0');
            ft_putchar(k % 10 + '0');
            if ((i / 10 != 9) || (i % 10 != 8))
            {
                ft_putchar(',');
                ft_putchar(' ');
            }
            k++;
        }
        i++;
    }
}
//teste
int main(void)
{
    ft_print_comb2();

    return 0;
}
