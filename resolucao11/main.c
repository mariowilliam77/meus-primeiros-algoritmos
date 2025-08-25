#include <stdio.h>

int main() {
    // Declara as vari�veis para o sal�rio e o valor do imposto.
    // Usamos 'float' para trabalhar com valores monet�rios que podem ter centavos.
    float salario, imposto;

    // Solicita ao usu�rio o valor do sal�rio.
    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    // Verifica se o sal�rio � um valor v�lido (maior ou igual a zero).
    if (salario >= 0) {
        // Calcula o imposto, que � 5% do sal�rio (salario * 0.05).
        imposto = salario * 0.05;

        // Imprime o resultado formatado com duas casas decimais.
        printf("\nO valor do imposto de renda a ser pago e: R$ %.2f\n", imposto);
    } else {
        printf("\nErro: O salario nao pode ser um valor negativo.\n");
    }

    return 0;
}
