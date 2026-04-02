// 3. Faça um algoritmo que calcule a velocidade média de um trajeto com base na
//distância percorrida e no tempo (em decimal) usado para isso

#include <stdio.h>
int main(){
    float distancia=0, tempo=0, velocidadeMedia=0;
    printf("Digite a distância percorrida (em km): ");
    scanf("%f", &distancia);
    printf("Digite o tempo gasto (em horas): ");
    scanf("%f", &tempo);

    if(tempo > 0){
        velocidadeMedia = distancia / tempo;
        printf("A velocidade média é %.1f km/h\n", velocidadeMedia);
    }else{
        printf("O tempo deve ser maior que zero para fazer o cálculo da velocidade média.\n");
    }
    return 0;
}