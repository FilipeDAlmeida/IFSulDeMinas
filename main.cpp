/*Fa�a um programa capaz de ler um n�mero caracter e um
n�mero inteiro do teclado. Ap�s a leitura apresente-os
na tela do computador.*/

#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    char c;
    int x;

    printf ("Digite um caracter: ");
    scanf("%c",&c);

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &x);

    printf("\nCaracter = %c \nInteiro = %d",c,x);
}
