#include <stdio.h>

// A fun��o main recebe os argumentos de linha de comando
// argc: contador de argumentos
// argv: array de strings (argumentos)
int main(int argc, char *argv[]) {
    // Verifica se a quantidade de argumentos � a esperada (o nome do programa + 3 nomes)
    if (argc != 4) {
        printf("Erro: Use o programa da seguinte forma:\n");
        printf("./seu_programa nome1 nome2 nome3\n");
        return 1; // Retorna um c�digo de erro
    }

    // Imprime o primeiro e o �ltimo nome na primeira linha
    // argv[1] � o primeiro nome
    // argv[3] � o terceiro nome
    printf("%s %s\n", argv[1], argv[3]);

    // Imprime o nome do meio na segunda linha
    // argv[2] � o segundo nome
    printf("%s\n", argv[2]);

    return 0; // Finaliza o programa com sucesso
}
