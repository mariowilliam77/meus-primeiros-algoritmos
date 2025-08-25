#include <stdio.h>

int main() {
/*declara��o de variaveis*/
    int x, y, divisao=0;

/*Entrada de dados*/
   printf("Entre com o primeiro valor:");
   scanf("%d", &x);
   printf("Entre com o segundo valor:");
    scanf("%d", &y);

/*Processamento*/
    divisao = x/y;

/*Saida*/
    printf("A diferenca e %d", divisao);
    return 0;
}
