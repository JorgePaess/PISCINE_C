#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr_non_printable(char *str)
{
    int i;
    char *hex;

    hex = "0123456789abcdef"; // Base hexadecimal

    i = 0;
    while (str[i])
    {
        // Verifica se o caractere NÃO é printável
        if (str[i] < 32 || str[i] == 127)
        {
            ft_putchar('\\'); // Exibe a barra invertida
            // Exibe o valor hexadecimal do caractere
            ft_putchar(hex[(unsigned char)str[i] / 16]); // Primeiro dígito
            ft_putchar(hex[(unsigned char)str[i] % 16]); // Segundo dígito
        }
        else
        {
            ft_putchar(str[i]); // Exibe o caractere printável
        }
        i++;
    }
}

int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
    return 0;
}
