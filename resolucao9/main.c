#include <stdio.h>
#include <math.h> // Para usar a constante M_PI

int main() {
    int escolha;
    double area, base, altura, lado, raio, diagonal1, diagonal2, base_menor, base_maior, comprimento, largura;

    // Exibe o menu de opções para o usuário
    printf("----------------------------------------\n");
    printf("Calculadora de Area de Figuras Geometricas\n");
    printf("----------------------------------------\n");
    printf("1. Triangulo\n");
    printf("2. Quadrado\n");
    printf("3. Circulo\n");
    printf("4. Trapezio\n");
    printf("5. Retangulo\n");
    printf("6. Losango\n");
    printf("----------------------------------------\n");
    printf("Digite o numero da figura desejada: ");
    scanf("%d", &escolha);

    // Usa a estrutura switch para lidar com cada escolha
    switch (escolha) {
        case 1: // Triangulo
            printf("\n--- Triangulo ---\n");
            printf("Digite a base: ");
            scanf("%lf", &base);
            printf("Digite a altura: ");
            scanf("%lf", &altura);
            area = (base * altura) / 2.0;
            printf("A area do triangulo e: %.2lf\n", area);
            break;

        case 2: // Quadrado
            printf("\n--- Quadrado ---\n");
            printf("Digite o valor do lado: ");
            scanf("%lf", &lado);
            area = lado * lado;
            printf("A area do quadrado e: %.2lf\n", area);
            break;

        case 3: // Circulo
            printf("\n--- Circulo ---\n");
            printf("Digite o valor do raio: ");
            scanf("%lf", &raio);
            area = M_PI * raio * raio;
            printf("A area do circulo e: %.2lf\n", area);
            break;

        case 4: // Trapezio
            printf("\n--- Trapezio ---\n");
            printf("Digite o valor da base maior: ");
            scanf("%lf", &base_maior);
            printf("Digite o valor da base menor: ");
            scanf("%lf", &base_menor);
            printf("Digite a altura: ");
            scanf("%lf", &altura);
            area = ((base_maior + base_menor) * altura) / 2.0;
            printf("A area do trapezio e: %.2lf\n", area);
            break;

        case 5: // Retangulo
            printf("\n--- Retangulo ---\n");
            printf("Digite o valor do comprimento: ");
            scanf("%lf", &comprimento);
            printf("Digite o valor da largura: ");
            scanf("%lf", &largura);
            area = comprimento * largura;
            printf("A area do retangulo e: %.2lf\n", area);
            break;

        case 6: // Losango
            printf("\n--- Losango ---\n");
            printf("Digite o valor da diagonal 1: ");
            scanf("%lf", &diagonal1);
            printf("Digite o valor da diagonal 2: ");
            scanf("%lf", &diagonal2);
            area = (diagonal1 * diagonal2) / 2.0;
            printf("A area do losango e: %.2lf\n", area);
            break;

        default: // Caso a escolha seja invalida
            printf("\nErro: Opcao invalida. Por favor, escolha um numero de 1 a 6.\n");
            break;
    }

    return 0;
}
