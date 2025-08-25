#include <stdio.h>

int main() {
    float custo_espetaculo;
    float preco_convite;
    int convites_para_custo;
    int convites_para_lucro;

    // 1. Recebe o custo do espetáculo e o preço do convite
    printf("Digite o custo do espetaculo teatral: R$ ");
    scanf("%f", &custo_espetaculo);

    printf("Digite o preco de cada convite: R$ ");
    scanf("%f", &preco_convite);

    // 2. Calcula a quantidade de convites para cobrir o custo
    // O cast para (int) garante um numero inteiro de convites.
    convites_para_custo = (int)(custo_espetaculo / preco_convite);

    // Se a divisao nao for exata, arredondamos para o proximo inteiro para garantir
    // que o custo seja pelo menos alcancado.
    if ((int)custo_espetaculo % (int)preco_convite != 0) {
        convites_para_custo++;
    }

    // 3. Calcula a quantidade de convites para ter 23% de lucro
    // O valor total para o lucro e o custo + (custo * 0.23)
    // Quantidade = Valor_Total / Preco_Convite
    float valor_para_lucro = custo_espetaculo * 1.23;
    convites_para_lucro = (int)(valor_para_lucro / preco_convite);

    // Arredondamos para cima se houver um resto.
    if ((int)valor_para_lucro % (int)preco_convite != 0) {
        convites_para_lucro++;
    }

    // 4. Imprime os resultados
    printf("\n--- Quantidade de Convites Necessarios ---\n");
    printf("Para alcancar o custo, devem ser vendidos %d convites.\n", convites_para_custo);
    printf("Para ter um lucro de 23%%, devem ser vendidos %d convites.\n", convites_para_lucro);

    return 0;
}
