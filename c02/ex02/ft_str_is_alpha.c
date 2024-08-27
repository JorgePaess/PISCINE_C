/*Crie uma função que retorne 1 se a string fornecida como parâmetro contiver apenas
caracteres alfabéticos e 0 se contiver qualquer outro caractere. Deve retornar 1 se str estiver vazio.*/

int iss_alpha(char c)
{
    if ((c >= 'a') && (c <= 'z'))
        return (1);
    if ((c >= 'A') && (c <= 'Z'))
        return (1)

    return (0);
}

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!(iss_alpha(str[i])))
            return (0);
    }
    return (1);
}
