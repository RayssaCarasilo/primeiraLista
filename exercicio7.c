// 7. Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a
// variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
// variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: no
// primeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e
// B.

#include <stdio.h>
// versão com terceira variável
/* int main()
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("A = %d", a);
    printf("\nB = %d", b);

    return 0;
} */

// versão sem terceira variável

int main()
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("A = %d", a);
    printf("\nB = %d", b);

    return 0;
}