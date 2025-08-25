#include <stdio.h>

int main() {
    int ano_nascimento;
    int ano_atual;
    int idade_anos;
    int idade_semanas;

    // 1. Recebe o ano de nascimento
    printf("Digite o ano de nascimento da pessoa (ex: 1990): ");
    scanf("%d", &ano_nascimento);

    // 2. Recebe o ano atual
    printf("Digite o ano atual (ex: 2024): ");
    scanf("%d", &ano_atual);

    // 3. Calcula a idade em anos
    idade_anos = ano_atual - ano_nascimento;

    // 4. Calcula a idade convertida em semanas
    // Uma conversão aproximada, considerando 52.177 semanas por ano.
    idade_semanas = idade_anos * 52;

    // 5. Imprime os resultados
    printf("\n--- Resultados ---\n");
    printf("A idade da pessoa é: %d anos\n", idade_anos);
    printf("Essa idade convertida em semanas é aproximadamente: %d semanas\n", idade_semanas);

    return 0;
}
