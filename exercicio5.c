// Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
// algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
// carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
// informar qual o valor em R$ a ser gasto com combustível na viagem

#include <stdio.h>
int main()
{

    float dist = 0, cons = 0, preco = 0, gasto=0, litroUsado=0;
    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &dist);
    printf("Digite qual foi o consumo do carro (em km/litro): ");
    scanf("%f", &cons);
    printf("Digite o preço do litro do combustível: ");
    scanf("%f", &preco);

    litroUsado = dist/cons;

    gasto = litroUsado*preco;

    printf("Você terá um gasto de R$%.2f na viagem.", gasto);
    return 0;
}