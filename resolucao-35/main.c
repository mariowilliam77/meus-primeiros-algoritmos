#include <stdio.h>

int main() {
    int numero_apartamentos;
    float valor_diaria_normal;
    float valor_promocional;
    float arrecadacao_100_promocao;
    float arrecadacao_70_promocao;
    float perda_arrecadacao;

    // 1. Recebe o numero de apartamentos e o valor da diaria normal
    printf("Digite o numero de apartamentos do hotel: ");
    scanf("%d", &numero_apartamentos);

    printf("Digite o valor da diaria normal por apartamento: R$ ");
    scanf("%f", &valor_diaria_normal);

    // 2. Calcula o valor promocional da diaria (desconto de 25%)
    valor_promocional = valor_diaria_normal * 0.75;

    // 3. Calcula o valor total a ser arrecadado com 100% de ocupacao na promocao
    arrecadacao_100_promocao = valor_promocional * numero_apartamentos;

    // 4. Calcula o valor total a ser arrecadado com 70% de ocupacao na promocao
    arrecadacao_70_promocao = arrecadacao_100_promocao * 0.70;

    // 5. Calcula o valor que o hotel deixara de arrecadar (perda com a promocao)
    perda_arrecadacao = (valor_diaria_normal * numero_apartamentos) - arrecadacao_100_promocao;

    // 6. Imprime os resultados
    printf("\n--- Detalhes da Promocao ---\n");
    printf("Valor promocional da diaria: R$ %.2f\n", valor_promocional);
    printf("Arrecadacao com 100%% de ocupacao: R$ %.2f\n", arrecadacao_100_promocao);
    printf("Arrecadacao com 70%% de ocupacao: R$ %.2f\n", arrecadacao_70_promocao);
    printf("Valor que o hotel deixara de arrecadar (em 100%%): R$ %.2f\n", perda_arrecadacao);

    return 0;
}
