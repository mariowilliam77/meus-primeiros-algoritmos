#include <stdio.h>

int main() {
    float temperatura_celsius;
    float temperatura_fahrenheit;

    // 1. Recebe a temperatura em Celsius
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &temperatura_celsius);

    // 2. Converte Celsius para Fahrenheit usando a fórmula
    temperatura_fahrenheit = (9 * temperatura_celsius + 160) / 5;

    // 3. Imprime o resultado
    printf("\n--- Conversao ---\n");
    printf("A temperatura de %.2f Celsius equivale a %.2f Fahrenheit.\n",
           temperatura_celsius, temperatura_fahrenheit);

    return 0;
}
