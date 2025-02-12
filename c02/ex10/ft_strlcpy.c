#include <stddef.h> //Para o size_t


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    size_t i;

    //Verificação do buffer de destino
    if (size == 0)
    {  
    //Se o buffer for 0, retorna apenas o tamanho da string sem copiar nada 
        i = 0;

        while (src[i] != '\0') //Enquanto não chegarmos no caractere nulo
        {
            i++;
        }
        return i; //Retornamos o tamanho da string
    }

    //Copiando os caracteres de src para dest
    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    dest[i] = '\0'; //Adicionamos o caratere nulo no final

    //Calcular o comprimento final de src
    while (src[i] != '\0')
    {
        i++;
    }
    return i;//Retornamos o complimento de src
}
