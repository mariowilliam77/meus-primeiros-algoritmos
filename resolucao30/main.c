#include <stdio.h>

int main() {
    float custo_fabrica;
    float custo_com_impostos;
    float custo_consumidor;
    const float PERCENTUAL_IMPOSTOS = 0.45;
    const float PERCENTUAL_DISTRIBUIDOR = 0.28;

    // 1. Recebe o custo de fábrica do carro
    printf("Digite o custo de fabrica do carro: R$ ");
    scanf("%f", &custo_fabrica);

    // 2. Calcula o custo com os impostos
    // Os impostos sao aplicados sobre o custo de fabrica.
    custo_com_impostos = custo_fabrica * (1 + PERCENTUAL_IMPOSTOS);

    // 3. Calcula o custo ao consumidor
    // A percentagem do distribuidor e aplicada sobre o resultado com os impostos.
    custo_consumidor = custo_com_impostos * (1 + PERCENTUAL_DISTRIBUIDOR);

    // 4. Imprime o custo final
    printf("\nO custo ao consumidor do carro e: R$ %.2f\n", custo_consumidor);

    return 0;
}
