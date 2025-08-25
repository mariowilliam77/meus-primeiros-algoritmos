#include <stdio.h>

int main() {
    float salario_atual;
    float novo_salario;

    // Imprime uma mensagem para o usuário
    printf("Digite o salário atual do funcionário: ");

    // Lê o valor do salário a partir da entrada do usuário
    scanf("%f", &salario_atual);

    // Calcula o novo salário com um aumento de 25%
    // A expressão (salario_atual * 1.25) realiza a operação diretamente.
    novo_salario = salario_atual * 1.25;

    // Imprime o resultado do novo salário
    printf("O novo salário é: %.2f\n", novo_salario);

    return 0;
}
