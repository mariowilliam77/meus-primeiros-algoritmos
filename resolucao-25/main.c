#include <stdio.h>

int main() {
    float distancia_km;
    float velocidade_kmh;
    float tempo_horas;
    float velocidade_ms;

    // 1. Recebe a distância em km
    printf("Digite a distancia entre os pontos em KM: ");
    scanf("%f", &distancia_km);

    // 2. Recebe a velocidade em km/h
    printf("Digite a velocidade media em km/h: ");
    scanf("%f", &velocidade_kmh);

    // 3. Calcula o tempo de viagem em horas
    // Tempo = Distancia / Velocidade
    tempo_horas = distancia_km / velocidade_kmh;

    // 4. Converte a velocidade de km/h para m/s
    // A formula de conversao e: km/h / 3.6
    velocidade_ms = velocidade_kmh / 3.6;

    // 5. Imprime os resultados
    printf("\n--- Resultados ---\n");
    printf("Tempo medio de chegada: %.2f horas\n", tempo_horas);
    printf("Velocidade em metros por segundo: %.2f m/s\n", velocidade_ms);

    return 0;
}
