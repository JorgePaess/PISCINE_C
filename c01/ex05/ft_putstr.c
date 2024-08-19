/*Crie uma função que exiba uma sequência de caracteres na saída padrão.*/

#include <unistd.h> // Biblioteca para a chamada de sistema write

// Função que imprime um caractere no terminal
void ft_putchar(char c)
{
    write(1, &c, 1);
}

// Função que imprime uma string no terminal
void ft_putstr(char *str) // Recebe um ponteiro de um array
{
    unsigned int i; // Contador

    i = 0; // Inicia em zero
    while (str[i] != '\0') // Loop que percorre a string enquanto o valor não for '/0'
    {
        ft_putchar(str[i]); // Imprime no terminal
        i++; // Incrementa
    }
}

//teste
int main(void)
{
    char t[] = {"Hello\n"};
    
    ft_putstr(t); // Chamada da função

    return 0;
}


