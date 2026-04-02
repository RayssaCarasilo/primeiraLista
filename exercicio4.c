//Faça um algoritmo que recebe dois valores representando as medidas da base e da
//altura de um triângulo qualquer e exiba a área deste triângulo

#include <stdio.h>
int main()
{
    float b=0, h=0, area;
    printf("Digite o tamanho da base do triângulo: ");
    scanf("%f", &b);

    printf("\nDigite o tamanho da altura do triângulo: ");
    scanf("%f", &h);

    area = (b*h)/2;

    printf("\nA área deste triângulo mede %.1f", area);
    return 0;
}
