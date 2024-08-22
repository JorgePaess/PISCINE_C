/*Reproduza o comportamento da função strcpy (man strcpy).*/

char *ft_strcpy(char *dest, char *src) // a função irá retornaa um ponteiro do tipo char
{
    int i; // contador

    i = 0;
    while (src[i]) // o valor de src[i] é covertido para int, ou seja quando o valor for '\0', ele no while será 0, assim sendo FALSE para o loop.
    {
        dest[i] = src[i]; // apenas copiamos as posições para outro array
        i++;
    }
    dest[i] = '\0'; // no fim adicionamos '\0' para transformar dest[i] em uma string

        return (dest) // retornamos o valor
}
