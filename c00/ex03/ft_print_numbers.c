/*Crie uma função que exiba todos os digitos em uma única linha e em ordem crescente.*/

//Importamos a biblioteca para usar a função write
#include <unistd.h>
//Criamos nossa função para exibir os números
void ft_putchar(char c)
{
    write(1,&c,1);
}
//Criamos nossa função que irá exibir os números
void ft_print_numbers(void)
{
    char numero;
    
    numero = '0';
    while (numero <= '9')
    {
        ft_putchar(numero);
        numero++;
    }
}
//teste
int main(void)
{
    ft_print_numbers();

    return 0;
}
