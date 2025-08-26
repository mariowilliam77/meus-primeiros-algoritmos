#include <stdio.h>

int main() {
    float produto1, produto2, produto3, produto4, produto5;
    float somatorio_produtos;
    float valor_pago;
    float troco;

    // 1. Recebe o valor de cada um dos cinco produtos
    printf("Digite o valor do primeiro produto: ");
    scanf("%f", &produto1);

    printf("Digite o valor do segundo produto: ");
    scanf("%f", &produto2);

    printf("Digite o valor do terceiro produto: ");
    scanf("%f", &produto3);

    printf("Digite o valor do quarto produto: ");
    scanf("%f", &produto4);

    printf("Digite o valor do quinto produto: ");
    scanf("%f", &produto5);

    // 2. Calcula a soma total dos valores
    somatorio_produtos = produto1 + produto2 + produto3 + produto4 + produto5;

    // 3. Recebe o valor do pagamento
    printf("\nTotal da compra: R$ %.2f\n", somatorio_produtos);
    printf("Digite o valor do pagamento: ");
    scanf("%f", &valor_pago);

    // 4. Calcula o troco
    troco = valor_pago - somatorio_produtos;

    // 5. Exibe o valor do troco
    printf("O troco a ser devolvido e: R$ %.2f\n", troco);

    return 0;
}
