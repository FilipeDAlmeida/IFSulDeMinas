/*Fa�a um programa que receba o pre�o de uma compra,
calcule e mostre o pre�o final da compra, sabendo-se
que esta sofreu um desconto de 15%.*/

#include <stdio.h>

int main()
{
    float p_compra, p_final;

    printf ("Digite o valor da compra: ");
    scanf("%f",&p_compra);

    p_final = p_compra - (p_compra*15/100);

    printf("\n\nPreco Final = %f\n\n", p_final);

}

