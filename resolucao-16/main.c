#include <stdio.h>

// A função main recebe os argumentos de linha de comando
// argc: contador de argumentos
// argv: array de strings (argumentos)
int main(int argc, char *argv[]) {
    // Verifica se a quantidade de argumentos é a esperada (o nome do programa + 3 nomes)
    if (argc != 4) {
        printf("Erro: Use o programa da seguinte forma:\n");
        printf("./seu_programa nome1 nome2 nome3\n");
        return 1; // Retorna um código de erro
    }

    // Imprime o primeiro e o último nome na primeira linha
    // argv[1] é o primeiro nome
    // argv[3] é o terceiro nome
    printf("%s %s\n", argv[1], argv[3]);

    // Imprime o nome do meio na segunda linha
    // argv[2] é o segundo nome
    printf("%s\n", argv[2]);

    return 0; // Finaliza o programa com sucesso
}
