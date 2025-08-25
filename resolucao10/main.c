#include <stdio.h>

int main() {
    // Declara as vari�veis para a diagonal e a �rea.
    // Usamos 'double' para maior precis�o.
    double diagonal, area;

    // Pede e l� o valor da diagonal.
    printf("Digite o valor da diagonal do quadrado: ");
    scanf("%lf", &diagonal);

    // Verifica se o valor da diagonal � positivo.
    if (diagonal > 0) {
        // Calcula a area. A formula � (diagonal * diagonal) / 2.
        area = (diagonal * diagonal) / 2.0;

        // Imprime o resultado formatado com duas casas decimais.
        printf("\nA area do quadrado e: %.2lf\n", area);
    } else {
        printf("\nErro: O valor da diagonal deve ser maior que zero.\n");
    }

    return 0;
}
