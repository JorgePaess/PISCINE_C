/*Create a function that capitalizes the first letter of each word and transforms all
other letters to lowercase.*/

int iss_alpha(char c) //Verifica se o char c é uma letra
{
    return ((c >= 'a' && c  <= 'z') || (c >= 'A' && c <= 'Z'))
}

int is_maj(char c)//Verifica se o char c é maiusculo
{
    return ((c >= 'A') && (c <= 'Z')); 
}

int is_min(char c)//Verifica se o char c é minusculo
{
    return ((c >= 'a') && (c <= 'z'));
}

char *ft_strcapitalize(char *str)//Deixa a primeira letra de uma palavra em maiusculo
{
    int i = 0; //Contador
    int new_word = 1; //Para indicar o ínicio de uma nova palavra

    while (str[i] != '\0')//Enquanto for diferente do caracter nulo
    {
        if (is_alpha(str[i]))//Verifica se é uma letra
        {
            if (new_word && is_min(str[i]))//roda se for ínicio da palavra e minuscula
                str[i] = ((str[i] - 'a') + 'A');//Converte para maiuscula
            else if (!new_word && is_maj(str[i]))//roda se não for ínicio de frase e maiuscula
                str[i] = ((str[i] - 'A') + 'a');//Converte para minuscula
            new_word = 0;//Indica que não tá mais no ínicio da palavra
        }
        else//senão for letra
        {
            new_word = 1;//indica que o proximo caractere é o ínicio da palavra
        }
        i++;
    }
    return (str) //Retorna a string modificada
}

