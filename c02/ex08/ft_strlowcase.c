/*Create a function that transforms every letter to lowercase.*/

char *ft_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') //Enquanto o char for diferente do caracter nulo
    {
        if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            str[i] = str[i] + 32 //Convertemos usando a tabela ascii
        }
        i++;
    }

    return (str) //Retorna uma string modificada
}
