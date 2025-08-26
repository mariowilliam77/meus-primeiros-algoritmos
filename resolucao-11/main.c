#include <stdio.h>

int main() {
    // Declara as variáveis para o salário e o valor do imposto.
    // Usamos 'float' para trabalhar com valores monetários que podem ter centavos.
    float salario, imposto;

    // Solicita ao usuário o valor do salário.
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    // Verifica se o salário é um valor válido (maior ou igual a zero).
    if (salario >= 0) {
        // Calcula o imposto, que é 5% do salário (salario * 0.05).
        imposto = salario * 0.05;

        // Imprime o resultado formatado com duas casas decimais.
        printf("\nO valor do imposto de renda a ser pago e: R$ %.2f\n", imposto);
    } else {
        printf("\nErro: O salario nao pode ser um valor negativo.\n");
    }

    return 0;
}
