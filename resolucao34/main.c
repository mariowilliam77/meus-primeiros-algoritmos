#include <stdio.h>

int main() {
    float peso;
    float altura;
    float imc;

    // 1. Recebe o peso da pessoa em quilogramas
    printf("Digite o peso em quilogramas (ex: 70.5): ");
    scanf("%f", &peso);

    // 2. Recebe a altura da pessoa em metros
    printf("Digite a altura em metros (ex: 1.75): ");
    scanf("%f", &altura);

    // 3. Calcula o Índice de Massa Corpórea (IMC)
    // IMC = peso / (altura * altura)
    imc = peso / (altura * altura);

    // 4. Imprime o resultado
    printf("\nSeu Indice de Massa Corporea (IMC) e: %.2f\n", imc);

    return 0;
}
