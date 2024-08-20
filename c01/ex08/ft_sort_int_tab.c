/*Crie uma função que classifique um array de inteiros em ordem crescente.
• Os argumentos são um ponteiro para int e o número de inteiros no array*/

void ft_sort_int_tab(int *tab, int size)
{
        int i;
        int j;
        int temp;
        
        i = 0;
        while(i < size - 1)
        {
            j = 0;
            while(j < size - i - 1)
            {
                if (tab[j] > tab[j + 1])
                {
                    temp = tab[j];
                    tab[j] = tab[j + 1];
                    tab[j + 1] = temp;
                }
                j++;
            }
            i++;
        }
}
