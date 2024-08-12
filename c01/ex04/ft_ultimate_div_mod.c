/*Esta função divide os parâmetros a por b. O resultado desta divisão é armazenado no
int apontado por a. O restante da divisão é armazenado no int apontado por b.*/

void ft_ultimate_div_mod(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *a / *b;
    *b = temp % *b;
}

//teste
int main(void)
{
    int a;
    int b;

    a = 452;
    b = 88;
    ft_ultimate_div_mod(&a, &b);

    return 0;
}
