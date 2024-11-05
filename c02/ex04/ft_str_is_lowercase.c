/*Create a function that returns 1 if the string given as a computer contains
 only lowercase alphabetical characters, and 0 if it contains any other character*/


int ft_str_is_lowercase(char *str);
{
    int i;

    i = 0;
    
    // Recebe uma string e verfica se cada caractere está em minusculo
    while (str[i])
    {
        if (!((str[i] >= 'a') && (str[i] <= 'z')))
            return (0);

        i++;
    }
    return (1)
}
