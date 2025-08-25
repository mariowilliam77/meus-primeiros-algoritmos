#include <stdio.h>
#include <math.h> // Necessario para a funcao pow()

int main() {
    // Declara as variaveis como 'double' para lidar com expoentes e resultados com decimais.
    double base, expoente, resultado;

    // 1. Recebe os dois numeros do usuario
    printf("Digite o valor da base: ");
    scanf("%lf", &base);

    printf("Digite o valor do expoente: ");
    scanf("%lf", &expoente);

    // 2. Calcula a potencia
    resultado = pow(base, expoente);

    // 3. Imprime o resultado formatado
    printf("\n%.2lf elevado a %.2lf e igual a: %.2lf\n", base, expoente, resultado);

    return 0;
}
