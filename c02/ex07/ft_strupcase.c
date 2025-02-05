/*Create a function that transforms every letter to uppercase.*/

char *ft_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0') //Enquanto char em str[i] for diferente do caracter nulo
    {
        if  ((str[i] >= 'a') && (str[i] <= 'z')) //Verifica se a letra é minuscula
        {
            str[i] = ((str[i] - 'a') + 'A'); //Faz a converção usando a tabela ascii
        }
        i++;
    }
    return (str); //Retorna uma string modificada
}
