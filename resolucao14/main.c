#include <stdio.h>

int main() {
    int peso_kg;
    int peso_gramas;
    int novo_peso_gramas;

    // 1. Solicita e l� o peso da pessoa em quilogramas (valor inteiro)
    printf("Digite o peso da pessoa em quilogramas (kg, valor inteiro): ");
    scanf("%d", &peso_kg);

    // 2. Calcula o peso em gramas
    // 1 kg = 1000 gramas
    peso_gramas = peso_kg * 1000;

    // 3. Calcula o novo peso em gramas com aumento de 5%
    // Para calcular um aumento de 5%, multiplicamos o peso original por 1.05.
    // Usamos float na opera��o para garantir a precis�o, mesmo que as vari�veis
    // sejam inteiras, e o resultado � convertido para int.
    novo_peso_gramas = (int)(peso_gramas * 1.05);

    // 4. Imprime os resultados
    printf("\n--- Resultados ---\n");
    printf("O peso em gramas �: %d g\n", peso_gramas);
    printf("O novo peso em gramas (ap�s engordar 5%%) ser�: %d g\n", novo_peso_gramas);

    return 0;
}
