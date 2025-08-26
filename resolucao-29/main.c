#include <stdio.h>

int main() {
    float preco_custo;
    float percentual_acrescimo;
    float preco_venda;

    // 1. Recebe o preço de custo do produto
    printf("Digite o preco de custo do produto: R$ ");
    scanf("%f", &preco_custo);

    // 2. Recebe o percentual de acréscimo
    printf("Digite o percentual de acrescimo (ex: 25 para 25%%): ");
    scanf("%f", &percentual_acrescimo);

    // 3. Calcula o preço de venda
    // Para aplicar o acréscimo, a formula e: preco de custo * (1 + percentual/100)
    preco_venda = preco_custo * (1 + percentual_acrescimo / 100);

    // 4. Imprime o resultado
    printf("\nO preco de venda do produto e: R$ %.2f\n", preco_venda);

    return 0;
}
