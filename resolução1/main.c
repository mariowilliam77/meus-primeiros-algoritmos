#include <stdio.h>

/* fun��o main inicia execu��o do programa*/
int main(void)
{
    int inteiro1; /* primeiro n�mero a ser informado pelo usuario */
    int inteiro2; /* segundo n�mero a ser informado pelo usuario */
    int soma; /* variavel em que a soma sera mantida */

    printf("Digite o primeiro inteiro\n"); /*prompt */
    scanf("%d", &inteiro1); /* l� um inteiro */

    printf("Digite o segundo inteiro\n"); /*prompt */
    scanf("%d", &inteiro2); /* l� um inteiro */

    soma = inteiro1 + inteiro2; /* atribui o total a soma */

    printf("A soma e %d\n", soma);

    return 0;

}
