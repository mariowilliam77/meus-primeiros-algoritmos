#include <stdio.h>

int main() {
    float valor_original;
    float novo_valor;

    // 1. Recebe o valor original do produto
    printf("Digite o valor original do produto: R$ ");
    scanf("%f", &valor_original);

    // 2. Calcula o novo valor com desconto de 9%
    // A formula para calcular um desconto de 9% é multiplicar o valor original por 0.91.
    // Ou seja, 100% - 9% = 91% (0.91)
    novo_valor = valor_original * 0.91;

    // 3. Imprime o novo valor
    printf("O novo valor com 9%% de desconto e: R$ %.2f\n", novo_valor);

    return 0;
}
