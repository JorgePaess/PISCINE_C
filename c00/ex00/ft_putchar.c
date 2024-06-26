//Escreva uma função que exiba o caractere passado como parâmetro

#include <stdio.h> //Para usarmos o printf
#include <unistd.h> //Usamos essa biblioteca para a função write

//Agora criamos a função que vai exibir o caractere
void ft_putchar(char c) 
{
    write(1,&c,1);    
}
//Criamos nossa função main
int main() 
{
    char c = 'C'; //Usaremos essa variavel como parâmetro da função
    
    ft_putchar(c); //Usamos nossa função e passamos o char c como parâmetro
    
    ft_putchar('T');//Poderiamos fazer assim também
    
    printf("\n");//Usamos apenas para quebrar uma linha
    
    return 0; //usamos o return por causa do int main
}

