/*Faça um programa capaz de ler um número caracter e um
número inteiro do teclado. Após a leitura apresente-os
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

    printf("\nDigite um número inteiro: ");
    scanf("%d", &x);

    printf("\nCaracter = %c \nInteiro = %d",c,x);
}
