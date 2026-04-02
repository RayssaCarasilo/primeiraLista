#include <stdio.h>

int main(){
    int num=0, metade=0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    metade = num / 2;
    printf("A metade de %d é %d\n", num, metade);
    return 0;
}