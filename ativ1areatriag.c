/*1. Faça um programa que calcule e mostre a área de um triângulo.
Sabe-se que: Área = (base * altura)/2.*/

#include <stdio.h>


int main()
{
    float area, base, alt;

    printf("===========================================");
    printf("      CALCULANDO AREA DO TRIANGULO         ");
    printf("===========================================");

    printf ("\n\nDigite o valor da Base: ");
    scanf("%f",&base);

    printf ("\nDigite o valor da Altura: ");
    scanf("%f",&alt);

    area = (base * alt)/2;

    printf("\nAREA DO TRIANGULO É = %f", &area);

}

