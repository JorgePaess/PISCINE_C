/*
Create a function that returns 1 if the string given as a parameter contains only
printable characters, and 0 if it contains any other character.
*/

//Constantes para valores ASCII_PRINTABLE
#define ASCII_PRINTABLE_MIN 32
#define ASCII_PRINTABLE_MAX 126

//Retorna 1 se a string for vazia ou contiver apenas caracteres imprimiveis
int ft_str_is_printable(char *str)
{
    //Caso o ponteiro seja nulo
    if (str == NULL)
    {
        return (0);  
    }

    //criação do contador
    int i = 0;

    while (str[i])
    {
        if (!(str[i] >= ASCII_PRINTABLE_MIN && str[i] <= ASCII_PRINTABLE_MAX))
        {
            return (0);
        }

        i++;
    }
    return (1);
}
