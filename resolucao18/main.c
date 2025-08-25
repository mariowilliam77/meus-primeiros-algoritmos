#include <stdio.h>

int main() {
    float largura;
    float comprimento;
    float area_total;

    // 1. Solicita e lê a largura do lote
    printf("Digite a largura do lote em metros: ");
    scanf("%f", &largura);

    // 2. Solicita e lê o comprimento do lote
    printf("Digite o comprimento do lote em metros: ");
    scanf("%f", &comprimento);

    // 3. Calcula a área total (Area = largura * comprimento)
    area_total = largura * comprimento;

    // 4. Imprime o resultado
    printf("A área total do lote é: %.2f metros quadrados\n", area_total);

    return 0;
}
