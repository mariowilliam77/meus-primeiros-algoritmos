#include <stdio.h>

int main() {
    int peso_kg;
    int peso_gramas;
    int novo_peso_gramas;

    // 1. Solicita e lê o peso da pessoa em quilogramas (valor inteiro)
    printf("Digite o peso da pessoa em quilogramas (kg, valor inteiro): ");
    scanf("%d", &peso_kg);

    // 2. Calcula o peso em gramas
    // 1 kg = 1000 gramas
    peso_gramas = peso_kg * 1000;

    // 3. Calcula o novo peso em gramas com aumento de 5%
    // Para calcular um aumento de 5%, multiplicamos o peso original por 1.05.
    // Usamos float na operação para garantir a precisão, mesmo que as variáveis
    // sejam inteiras, e o resultado é convertido para int.
    novo_peso_gramas = (int)(peso_gramas * 1.05);

    // 4. Imprime os resultados
    printf("\n--- Resultados ---\n");
    printf("O peso em gramas é: %d g\n", peso_gramas);
    printf("O novo peso em gramas (após engordar 5%%) será: %d g\n", novo_peso_gramas);

    return 0;
}
