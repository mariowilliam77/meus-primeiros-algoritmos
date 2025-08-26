#include <stdio.h>

int main() {
    int ano_nascimento;
    int ano_atual;
    int idade_atual;
    int idade_em_2028;
    const int ANO_FUTURO = 2028;

    // 1. Recebe o ano de nascimento da pessoa
    printf("Digite o ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    // 2. Recebe o ano atual
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    // 3. Calcula a idade atual
    idade_atual = ano_atual - ano_nascimento;

    // 4. Calcula a idade que a pessoa terá em 2028
    idade_em_2028 = ANO_FUTURO - ano_nascimento;

    // 5. Imprime os resultados
    printf("\n--- Resultados ---\n");
    printf("A idade da pessoa e: %d anos\n", idade_atual);
    printf("Em 2028, essa pessoa tera: %d anos\n", idade_em_2028);

    return 0;
}
