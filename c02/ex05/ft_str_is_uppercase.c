/*Create a function that returns 1 if the string given as a parameter contains 
only uppercase alphabetical characters, and 0 if it contains any other character.*/

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;

    while (str[i])
    {
        if (!((str[i] >= 'A') && (str[i] <= 'Z')))
            return (0);

        i++;
    }
    return (1);
}
