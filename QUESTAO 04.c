#include <stdio.h>

int main() {
    float pesoPescado, excedente = 0, multa = 0;
    const float limite = 50.0; // Limite de pesca em kg
    const float valorMultaPorKg = 4.0; // Valor da multa por kg a mais

    // Solicita ao usuário para inserir a quantidade de peixe pescado
    printf("Informe a quantidade de peixe pescado em kg: ");
    scanf("%f", &pesoPescado);

    // Verifica se houve excesso
    if (pesoPescado > limite) {
        excedente = pesoPescado - limite;
        multa = excedente * valorMultaPorKg;
    }

    // Exibe o resultado
    if (excedente > 0) {
        printf("Voce excedeu %.2f kg do limite.\n", excedente);
        printf("A multa a ser paga e de R$ %.2f\n", multa);
    } else {
        printf("Voce nao excedeu o limite de pesca. Sem multa a pagar.\n");
    }

    return 0;
}

