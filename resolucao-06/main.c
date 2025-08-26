#include <stdio.h>

int main() {
// Declara a variavel para o numero.
    int numero;
    int i; // Variavel de controle de loop

//Entrada de dados
   printf("Digite um numero inteiro para ver a tabuada: ");
   scanf("%d", &numero);

   printf("\n-- Tabuada de multiplicacao do %d --\n", numero);

   // Usa um loop para calcular e imprimir cada linha da tabuada.
    for (i = 1; i <= 10; i++) {
        // Imprime a operação e o resultado.
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
