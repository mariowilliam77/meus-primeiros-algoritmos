#include <stdio.h>

int main() {
    float valor1, valor2, valor3;
    float somatorio;
    float media;
    int resto1, resto2, resto3;

    // 1. Recebe os três valores
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &valor3);

    // 2. Calcula o somatório e a média
    somatorio = valor1 + valor2 + valor3;
    media = somatorio / 3.0;

    // 3. Calcula o resto da divisão do somatório por cada valor
    // Para usar o operador de resto (%), precisamos de valores inteiros.
    // Assim, convertemos os valores de float para int.
    resto1 = (int)somatorio % (int)valor1;
    resto2 = (int)somatorio % (int)valor2;
    resto3 = (int)somatorio % (int)valor3;

    // 4. Imprime os resultados
    printf("\n--- Resultados ---\n");
    printf("O somatorio dos valores e: %.2f\n", somatorio);
    printf("A media dos valores e : %.2f\n", media);
    printf("O resto da divisao do somatorio por %f é: %d\n", valor1, resto1);
    printf("O resto da divisao do somatorio por %f é: %d\n", valor2, resto2);
    printf("O resto da divisao do somatorio por %f é: %d\n", valor3, resto3);

    return 0;
}
