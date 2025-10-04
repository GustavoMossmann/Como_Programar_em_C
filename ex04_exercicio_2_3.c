// Exercício 2.4 - página 68 
#include <stdio.h>

// função main calcula o produto de 3 números inteiros recebidos pelo usuário e exibe resultado na tela
int main(void)
{
    int x, y, z, resultado;

    printf("Digite 3 numeros inteiros:\n");

    scanf("%d%d%d", &x, &y, &z);

    resultado = x * y * z;

    printf("%d * %d * %d = %d", x, y, z, resultado);

    return 0;    
} // fim da função main