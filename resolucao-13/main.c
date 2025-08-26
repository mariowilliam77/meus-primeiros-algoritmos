#include <stdio.h>

int main() {
    float salario_minimo;
    float quantidade_kw_gasta;
    float valor_kw;
    float valor_a_pagar;
    float valor_com_desconto;

    // 1. Recebe o valor do sal�rio m�nimo
    printf("Digite o valor do sal�rio m�nimo atual: ");
    scanf("%f", &salario_minimo);

    // 2. Recebe a quantidade de quilowatts gasta
    printf("Digite a quantidade de quilowatts (kW) consumida: ");
    scanf("%f", &quantidade_kw_gasta);

    // 3. Calcula o valor de cada kilowatt
    valor_kw = salario_minimo / 5.0;

    // 4. Calcula o valor total a ser pago
    valor_a_pagar = valor_kw * quantidade_kw_gasta;

    // 5. Calcula o valor com desconto de 15%
    valor_com_desconto = valor_a_pagar * 0.85;

    // 6. Imprime os resultados
    printf("\n--- Resumo dos C�lculos ---\n");
    printf("O valor de cada kilowatt �: R$ %.2f\n", valor_kw);
    printf("O valor total a ser pago pela resid�ncia �: R$ %.2f\n", valor_a_pagar);
    printf("O valor a ser pago com desconto de 15%% �: R$ %.2f\n", valor_com_desconto);

    return 0;
}
