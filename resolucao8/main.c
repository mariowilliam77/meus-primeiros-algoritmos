#include <stdio.h>

int main() {
    // Declara as variáveis para o salário do funcionário, o salário mínimo e o resultado.
    // Usamos 'float' para permitir valores com centavos.
    float salario_funcionario;
    float salario_minimo;
    float salarios_ganhos;

    // Pede e lê o valor do salário do funcionário.
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario_funcionario);

    // Pede e lê o valor do salario minimo.
    printf("Digite o valor do salario minimo atual: ");
    scanf("%f", &salario_minimo);

    // Verifica se o valor do salario minimo é maior que zero para evitar divisão por zero.
    if (salario_minimo <= 0) {
        printf("Erro: O valor do salario minimo deve ser maior que zero.\n");
    } else {
        // Calcula a quantidade de salarios minimos.
        salarios_ganhos = salario_funcionario / salario_minimo;

        // Imprime o resultado formatado com duas casas decimais.
        printf("\nO funcionario ganha %.2f salarios minimos.\n", salarios_ganhos);
    }

    return 0;
}
