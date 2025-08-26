#include <stdio.h>

int main() {
    int A, B, C;
    int temp; // Vari�vel tempor�ria para ajudar na troca

    // 1. Recebe os valores de A, B e C
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("\n--- Valores Iniciais ---\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    // 2. Realiza a troca c�clica usando uma vari�vel tempor�ria
    // A fica com o valor de B, B com o valor de C, e C com o valor de A.
    temp = A; // Guarda o valor original de A
    A = B;    // A agora tem o valor de B
    B = C;    // B agora tem o valor de C
    C = temp;   // C agora tem o valor original de A

    // 3. Imprime os valores ap�s a troca
    printf("\n--- Valores Ap�s a Troca ---\n");
    printf("A = %d, B = %d, C = %d\n", A, B, C);

    return 0;
}
