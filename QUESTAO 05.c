#include <stdio.h>

int main() {
    float custoFabrica, percentualDistribuidor = 28.0, percentualImpostos = 45.0;
    float valorDistribuidor, valorImpostos, custoFinal;

    // Solicita ao usuário para inserir o custo de fábrica do carro
    printf("Informe o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    // Calcula o valor correspondente ao percentual do distribuidor
    valorDistribuidor = (percentualDistribuidor / 100) * custoFabrica;

    // Calcula o valor correspondente aos impostos
    valorImpostos = (percentualImpostos / 100) * custoFabrica;

    // Calcula o custo final ao consumidor
    custoFinal = custoFabrica + valorDistribuidor + valorImpostos;

    // Exibe o resultado
    printf("O valor final que sera pago pelo consumidor eh: R$ %.2f\n", custoFinal);

    return 0;
}

