#include <stdio.h>
#include <math.h> // Necessário para usar a função de raiz quadrada

int main() {
    float num1, num2;
    float produtoDobro, somaTriploMetade, raizQuadrada;

    // Solicita ao usuário para inserir dois números reais
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    // Calcula o produto do dobro do primeiro número
    produtoDobro = 2 * num1 * num1;

    // Calcula a soma do triplo do primeiro número com a metade do segundo número
    somaTriploMetade = (3 * num1) + (num2 / 2);

    // Calcula a raiz quadrada da soma do primeiro número com o segundo número
    raizQuadrada = sqrt(num1 + num2);

    // Exibe os resultados
    printf("Produto do dobro do primeiro numero: %.2f\n", produtoDobro);
    printf("Soma do triplo do primeiro numero com a metade do segundo numero: %.2f\n", somaTriploMetade);
    printf("Raiz quadrada da soma do primeiro numero com o segundo numero: %.2f\n", raizQuadrada);

    return 0;
}

