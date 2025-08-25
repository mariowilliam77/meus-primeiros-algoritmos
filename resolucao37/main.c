#include <stdio.h>

int main() {
    float tempo_gasto;
    float velocidade_media;
    float distancia;
    float litros_gastos;
    const float CONSUMO_POR_LITRO = 12.0;

    // 1. Recebe o tempo gasto e a velocidade media
    printf("Digite o tempo gasto na viagem em horas: ");
    scanf("%f", &tempo_gasto);

    printf("Digite a velocidade media em Km/h: ");
    scanf("%f", &velocidade_media);

    // 2. Calcula a distancia percorrida
    // Formula: distancia = tempo * velocidade
    distancia = tempo_gasto * velocidade_media;

    // 3. Calcula a quantidade de combustivel gasto
    // Formula: litros_gastos = distancia / consumo por litro
    litros_gastos = distancia / CONSUMO_POR_LITRO;

    // 4. Imprime os resultados
    printf("\n--- Detalhes da Viagem ---\n");
    printf("Distancia percorrida: %.2f Km\n", distancia);
    printf("Litros de combustivel gastos: %.2f litros\n", litros_gastos);

    return 0;
}
