/*crie uma função que exiba todas as diferentes combinações de três dígitos diferentes em ordem crescente,
listados em ordem crescente - sim, a repetição é voluntária*/

//importamos a biblioteca que contém a função write
#include <unistd.h>
//Função para exibir um caractere
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Função para exibir a virgula e o espaço
void ft_commas(void)
{
    ft_putchar(',');
    ft_putchar(' ');
}
//Função que faz a combinação dos três números
void ft_print_comb(void)
{
    int num[3];

    num[0] = '0';
    while (num[0] <= '9')
    {
        num[1] = '0';
        while (num[1] <= '9')
        {
            num[2] = '0';
            while (num[2] <= '9')
            {
                if (num[0] < num[1] && num[1] < num[2])
                {
                    ft_putchar(num[0]);
                    ft_putchar(num[1]);
                    ft_putchar(num[2]);
                    if(!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
                        ft_commas();
                }
                num[2]++;
            }
            num[1]++;
        }
        num[0]++;
    }
}
//teste
int main(void)
{
    ft_print_comb();

    return 0;
}
