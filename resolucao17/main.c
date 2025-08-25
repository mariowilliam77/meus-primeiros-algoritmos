#include <stdio.h>

int main() {
    int quantidade1, quantidade2, quantidade3;
    float valor1, valor2, valor3;
    float valor_total;

    // Solicita os dados dos três produtos
    printf("Digite a quantidade e o valor do produto 1 (ex: 5 10.50): ");
    scanf("%d %f", &quantidade1, &valor1);

    printf("Digite a quantidade e o valor do produto 2 (ex: 3 25.00): ");
    scanf("%d %f", &quantidade2, &valor2);

    printf("Digite a quantidade e o valor do produto 3 (ex: 8 5.75): ");
    scanf("%d %f", &quantidade3, &valor3);

    // Calcula o valor total
    valor_total = (quantidade1 * valor1) + (quantidade2 * valor2) + (quantidade3 * valor3);

    // Imprime o valor total
    printf("\nO valor total da compra é: R$ %.2f\n", valor_total);

    return 0;
}
