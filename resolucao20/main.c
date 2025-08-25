#include <stdio.h>

int main() {
    float comprimento;
    float largura;
    float profundidade;
    float volume_m3;
    float custo_total;

    // Define o preço por metro cúbico
    const float PRECO_POR_M3 = 45.00;

    // 1. Recebe as dimensões da piscina
    printf("Digite o comprimento da piscina em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da piscina em metros: ");
    scanf("%f", &largura);

    printf("Digite a profundidade da piscina em metros: ");
    scanf("%f", &profundidade);

    // 2. Calcula o volume da piscina em metros cúbicos (m³)
    // O volume é calculado pela fórmula: V = comprimento * largura * profundidade
    volume_m3 = comprimento * largura * profundidade;

    // 3. Calcula o custo total da construção
    custo_total = volume_m3 * PRECO_POR_M3;

    // 4. Imprime os resultados
    printf("\n--- Orçamento da Construção ---\n");
    printf("Volume da piscina: %.2f m3\n", volume_m3);
    printf("Custo total da construção: R$ %.2f\n", custo_total);

    return 0;
}
