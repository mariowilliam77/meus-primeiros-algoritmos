#include <stdio.h>

int main() {
// Declara as variaveis para as notas, pesos e a média
    float nota1, peso1, nota2, peso2, media_ponderada;

//Entrada de dados
   printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
   printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);
     printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
   printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);

//Processamento
    media_ponderada = (nota1 * peso1 + nota2 * peso2) / (peso1 + peso2);

//Saida
    printf("A media ponderada das notas e %f", media_ponderada);
    return 0;
}
