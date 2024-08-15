#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litrosUsados;
    const float consumoPorKm = 12.0; // km por litro

    // Solicita ao usu�rio para inserir o tempo gasto na viagem em horas
    printf("Informe o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);

    // Solicita ao usu�rio para inserir a velocidade m�dia durante a viagem
    printf("Informe a velocidade media (em km/h): ");
    scanf("%f", &velocidade);

    // Calcula a dist�ncia percorrida
    distancia = tempo * velocidade;

    // Calcula a quantidade de litros de gasolina utilizados
    litrosUsados = distancia / consumoPorKm;

    // Exibe o resultado
    printf("A quantidade de litros de gasolina utilizados na viagem eh: %.2f litros\n", litrosUsados);

    return 0;
}

