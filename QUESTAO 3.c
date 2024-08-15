#include <stdio.h>
#include <math.h> // Necess�rio para usar a fun��o de raiz quadrada

int main() {
    float num1, num2;
    float produtoDobro, somaTriploMetade, raizQuadrada;

    // Solicita ao usu�rio para inserir dois n�meros reais
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Calcula o produto do dobro do primeiro n�mero
    produtoDobro = 2 * num1 * num1;

    // Calcula a soma do triplo do primeiro n�mero com a metade do segundo n�mero
    somaTriploMetade = (3 * num1) + (num2 / 2);

    // Calcula a raiz quadrada da soma do primeiro n�mero com o segundo n�mero
    raizQuadrada = sqrt(num1 + num2);

    // Exibe os resultados
    printf("Produto do dobro do primeiro numero: %.2f\n", produtoDobro);
    printf("Soma do triplo do primeiro numero com a metade do segundo numero: %.2f\n", somaTriploMetade);
    printf("Raiz quadrada da soma do primeiro numero com o segundo numero: %.2f\n", raizQuadrada);

    return 0;
}

