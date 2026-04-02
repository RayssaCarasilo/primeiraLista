// Faça um algoritmo que solicite ao usuário um valor e exiba o dobro do valor.

#include <stdio.h>
int main(){
    int num=0, dobro=0;
    printf("Digite um número: ");
    scanf("%d", &num);

    dobro = num * 2;

    printf("O dobro de %d é %d\n", num, dobro);
    return 0;
}