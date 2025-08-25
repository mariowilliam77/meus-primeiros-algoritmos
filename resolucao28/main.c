#include <stdio.h>

int main() {
    float valor_compra;
    float valor_prestacao;

    // 1. Recebe o valor total da compra
    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valor_compra);

    // 2. Calcula o valor de cada uma das 5 prestacoes
    valor_prestacao = valor_compra / 5.0;

    // 3. Imprime o valor das prestacoes
    printf("\n--- Detalhes da Compra ---\n");
    printf("O valor de cada uma das 5 prestacoes e: R$ %.2f\n", valor_prestacao);

    return 0;
}
