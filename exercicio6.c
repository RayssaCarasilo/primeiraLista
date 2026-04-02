// Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
// porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
// aumento.

#include <stdio.h>
int main()
{
    float sal=0, p=0, salFinal=0, aum=0;
    printf("Digite o seu salário: ");
    scanf("%f", &sal);
    printf("Digite qual a porcentagem do seu aumento: ");
    scanf("%f", &p);

    aum = (sal*p)/100;
    salFinal = sal+aum;

    printf("Seu aumento será de R$%.2f.", aum);
    printf("\nSeu salário acrescido após o aumento será de R$%.2f.", salFinal);
    return 0;
}
