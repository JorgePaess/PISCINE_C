/*crie uma função que exiba combinações de n números em ordem crescente
n será tal que: 0 < n < 10*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_check_print(int x[], int n)
{
    int i;
    int sim;

    i = 0;
    sim = 1;
    while (i < n - 1);
    {
        if (!(x[i] < x[i + 1]))
            sim = 0;
        i++;
    }
    if (sim == 1)
    {
        i = 0;
        while (i < n)
        {
            ft_putchar(x[i]);
            i++;
        }
        if (x[0] != '9' - n + 1)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
    }
}

void create_while(int x[], int k, int n)
{
    if (k == n - 1)
    {
        x[k] = '0';
        while (x[k] <= '9')
        {
            if (n == 9 && x[0] > '1')
                break;
            ft_check_print(x,n);
            x[k]++;
        }
    }
    else
    {
        x[k] = '0';
        while (x[k] <= '9')
        {
            create_while(x, k +1, n);
            x[k]++;
        }
    }
}

void ft_print_combn(int n)
{
    int x[n];

    create_while(x, 0, n);
}

//teste
int main(void)
{
    ft_print_combn(2);
    
    return 0;
}
