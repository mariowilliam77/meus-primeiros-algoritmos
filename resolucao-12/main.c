#include <stdio.h>

int main() {
    float salario_atual;
    float novo_salario;

    // Imprime uma mensagem para o usu�rio
    printf("Digite o sal�rio atual do funcion�rio: ");

    // L� o valor do sal�rio a partir da entrada do usu�rio
    scanf("%f", &salario_atual);

    // Calcula o novo sal�rio com um aumento de 25%
    // A express�o (salario_atual * 1.25) realiza a opera��o diretamente.
    novo_salario = salario_atual * 1.25;

    // Imprime o resultado do novo sal�rio
    printf("O novo sal�rio �: %.2f\n", novo_salario);

    return 0;
}
