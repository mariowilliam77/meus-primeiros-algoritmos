#include <stdio.h>

int main() {
    float a, b, c, d, e, f;
    float x, y;

    // 1. Recebe os coeficientes
    printf("Para o sistema de equacoes:\n");
    printf("ax + by = c\n");
    printf("dx + ey = f\n\n");

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    printf("Digite o coeficiente d: ");
    scanf("%f", &d);

    printf("Digite o coeficiente e: ");
    scanf("%f", &e);

    printf("Digite o coeficiente f: ");
    scanf("%f", &f);

    // 2. Calcula os valores de x e y usando as formulas fornecidas
    // x = (ce - bf) / (ae - bd)
    // y = (af - cd) / (ae - bd)
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);

    // 3. Exibe os resultados
    printf("\n--- Solucao do Sistema ---\n");
    printf("O valor de x e: %.2f\n", x);
    printf("O valor de y e: %.2f\n", y);

    return 0;
}
