#include <stdio.h>

int main() {
    int total_eleitores;
    int votos_candidato1;
    int votos_candidato2;
    int votos_nulos;
    float percentual_candidato1;
    float percentual_candidato2;
    float percentual_nulos;

    // 1. Recebe o total de eleitores
    printf("Digite o numero total de eleitores: ");
    scanf("%d", &total_eleitores);

    // 2. Recebe os votos dos candidatos
    printf("Digite o numero de votos do primeiro candidato: ");
    scanf("%d", &votos_candidato1);

    printf("Digite o numero de votos do segundo candidato: ");
    scanf("%d", &votos_candidato2);

    // 3. Calcula o numero de votos nulos
    votos_nulos = total_eleitores - (votos_candidato1 + votos_candidato2);

    // 4. Calcula os percentuais
    percentual_candidato1 = (float)votos_candidato1 / total_eleitores * 100;
    percentual_candidato2 = (float)votos_candidato2 / total_eleitores * 100;
    percentual_nulos = (float)votos_nulos / total_eleitores * 100;

    // 5. Imprime os resultados
    printf("\n--- Resultados da Eleicao ---\n");
    printf("Percentual de votos do Candidato 1: %.2f%%\n", percentual_candidato1);
    printf("Percentual de votos do Candidato 2: %.2f%%\n", percentual_candidato2);
    printf("Percentual de votos nulos: %f\n", percentual_nulos);

    return 0;
}
