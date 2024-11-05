/*Create a function that returns 1 if the string given as a parameter contains
 only digits, and 0 if it contains any other character*/

// Verifica se o caractere é um número
int iss_num(char c)
{
    return ((c >= '0') && (c <= '9'));
}

// Recebe uma string e verifica cada caractere
int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    
    // Senão tiver letra retorna 0, senão retorna 1
    while (str[i])
    {
        if (!(iss_num(str[i])))
            return (0);
        i++;
    }
    return (1);
}
