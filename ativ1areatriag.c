/*1. Fa�a um programa que calcule e mostre a �rea de um tri�ngulo.
Sabe-se que: �rea = (base * altura)/2.*/

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

    printf("\nAREA DO TRIANGULO � = %f", &area);

}

