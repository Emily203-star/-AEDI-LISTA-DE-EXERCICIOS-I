#include <stdio.h>

int main() {
    float lado, area, dobroArea;

    // Solicita ao usu�rio para inserir o valor do lado do quadrado
    printf("Digite o comprimento do lado do quadrado: ");
    scanf("%f", &lado);

    // Calcula a �rea do quadrado
    area = lado * lado;

    // Calcula o dobro da �rea
    dobroArea = 2 * area;

    // Exibe o dobro da �rea para o usu�rio
    printf("O dobro da area do quadrado eh: %.2f\n", dobroArea);

    return 0;
}
