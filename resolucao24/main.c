#include <stdio.h>
#include <math.h> // Necessário para a função pow()

int main() {
    float aplicacao_mensal;
    float taxa_mensal;
    int numero_meses;
    float valor_acumulado;

    // 1. Recebe os dados da aplicação
    printf("Digite o valor da aplicacao mensal: R$ ");
    scanf("%f", &aplicacao_mensal);

    printf("Digite a taxa de juros mensal (ex: 0.005 para 0.5%%): ");
    scanf("%f", &taxa_mensal);

    printf("Digite o numero de meses: ");
    scanf("%d", &numero_meses);

    // 2. Calcula o valor acumulado usando a fórmula
    // (P * ((1 + i)^n - 1)) / i
    valor_acumulado = (aplicacao_mensal * (pow(1 + taxa_mensal, numero_meses) - 1)) / taxa_mensal;

    // 3. Imprime o resultado
    printf("\nO valor acumulado na poupança sera: R$ %.2f\n", valor_acumulado);

    return 0;
}
