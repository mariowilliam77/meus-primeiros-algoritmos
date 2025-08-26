#include <stdio.h>

int main() {
// Declara as variaveis para as notas e a média
    float nota1, nota2, nota3, media;

//Entrada de dados
   printf("Entre com o primeiro nota: ");
    scanf("%f", &nota1);
   printf("Entre com a segunda nota: ");
    scanf("%f", &nota2);
    printf("Entre com a terceira nota: ");
    scanf("%f", &nota3);

//Processamento
    media = (nota1 + nota2 + nota3) / 3;

//Saida
    printf("A media aritmetica das notas e %f", media);
    return 0;
}
