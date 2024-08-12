/*Esta função divide os parâmetros a por b e armazena o resultado no int apontado por
divisão. Também armazena o restante da divisão de a por b no int apontado por mod.*/

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
    
    printf("%d / %d = %d e resto é = %d\n",a,b,*div,*mod);
}

//teste
int main()
{
    int a = 40;
    int b = 5;

    int div = 0;
    int mod = 0;

    ft_div_mod(a, b, &div, &mod);
    
    return 0;
}
