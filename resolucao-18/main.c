#include <stdio.h>

int main() {
    float largura;
    float comprimento;
    float area_total;

    // 1. Solicita e l� a largura do lote
    printf("Digite a largura do lote em metros: ");
    scanf("%f", &largura);

    // 2. Solicita e l� o comprimento do lote
    printf("Digite o comprimento do lote em metros: ");
    scanf("%f", &comprimento);

    // 3. Calcula a �rea total (Area = largura * comprimento)
    area_total = largura * comprimento;

    // 4. Imprime o resultado
    printf("A �rea total do lote �: %.2f metros quadrados\n", area_total);

    return 0;
}
