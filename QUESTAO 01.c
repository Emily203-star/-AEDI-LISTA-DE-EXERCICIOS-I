#include <stdio.h>

int main() {
    float lado, area, dobroArea;

    // Solicita ao usuário para inserir o valor do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a área do quadrado
    area = lado * lado;

    // Calcula o dobro da área
    dobroArea = 2 * area;

    // Exibe o dobro da área para o usuário
    printf("O dobro da area do quadrado eh: %.2f\n", dobroArea);

    return 0;
}
