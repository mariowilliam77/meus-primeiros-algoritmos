#include <stdio.h>

int main() {
    float salario_atual;
    float novo_salario;

    // 1. Recebe o salário atual
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario_atual);

    // 2. Calcula o novo salário com aumento de 37%
    // Para aplicar um aumento de 37%, multiplicamos o valor original por 1.37
    novo_salario = salario_atual * 1.37;

    // 3. Imprime o novo salário
    printf("\nO novo salario com aumento de 37%% e: R$ %.2f\n", novo_salario);

    return 0;
}
