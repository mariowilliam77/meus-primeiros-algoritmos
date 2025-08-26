#include <stdio.h>

int main() {
/*declara��o de variaveis*/
    float x, y, subtracao=0;

/*Entrada de dados*/
   printf("Entre com o primeiro valor:");
   scanf("%f", &x);
   printf("Entre com o segundo valor:");
    scanf("%f", &y);

/*Processamento*/
    subtracao = x-y;

/*Saida*/
    printf("A diferenca e %f", subtracao);
    return 0;
}
