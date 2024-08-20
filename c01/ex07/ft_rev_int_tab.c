/*Crie uma função que inverte um determinado array de números inteiros (o primeiro vai por último, etc.).
• Os argumentos são um ponteiro para int e o número de inteiros no array.*/

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    char temp;

    i = -1;
    while(++i < --size)
    {
        temp = tab[i];
        tab[i] = tab[size];
        tab[size] = temp;
    }
}
