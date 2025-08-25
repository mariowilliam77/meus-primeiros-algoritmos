#include <stdio.h>

int main() {
    float altura_degrau;
    float altura_desejada;
    int numero_degraus;

    // 1. Recebe a altura de cada degrau
    printf("Digite a altura de cada degrau em metros: ");
    scanf("%f", &altura_degrau);

    // 2. Recebe a altura total desejada
    printf("Digite a altura total que deseja alcancar em metros: ");
    scanf("%f", &altura_desejada);

    // 3. Calcula o numero de degraus
    // A divisão de um float por um float resulta em um float.
    // Para obter um número inteiro de degraus, fazemos uma conversão (cast).
    numero_degraus = (int)(altura_desejada / altura_degrau);

    // 4. Imprime o resultado
    printf("\nPara alcancar a altura desejada, voce devera subir %d degraus.\n", numero_degraus);

    return 0;
}
