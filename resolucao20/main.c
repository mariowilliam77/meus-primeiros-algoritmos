#include <stdio.h>

int main() {
    float comprimento;
    float largura;
    float profundidade;
    float volume_m3;
    float custo_total;

    // Define o pre�o por metro c�bico
    const float PRECO_POR_M3 = 45.00;

    // 1. Recebe as dimens�es da piscina
    printf("Digite o comprimento da piscina em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da piscina em metros: ");
    scanf("%f", &largura);

    printf("Digite a profundidade da piscina em metros: ");
    scanf("%f", &profundidade);

    // 2. Calcula o volume da piscina em metros c�bicos (m�)
    // O volume � calculado pela f�rmula: V = comprimento * largura * profundidade
    volume_m3 = comprimento * largura * profundidade;

    // 3. Calcula o custo total da constru��o
    custo_total = volume_m3 * PRECO_POR_M3;

    // 4. Imprime os resultados
    printf("\n--- Or�amento da Constru��o ---\n");
    printf("Volume da piscina: %.2f m3\n", volume_m3);
    printf("Custo total da constru��o: R$ %.2f\n", custo_total);

    return 0;
}
