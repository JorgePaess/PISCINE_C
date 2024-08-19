/*Crie uma função que conte e retorne o número de caracteres em uma string.*/

#include <stdio.h>

int ft_strlen(char *str)
{
    int n;

    n = 0;
    while(str[n] != '\0')
    {
        n++;
    }
    return n;
}
//teste
int main(void)
{
    int quant;
    char t[] = {"Hello\n"};
    
    quant = ft_strlen(t);
    printf("%d",quant);

    return 0;
}
