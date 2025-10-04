#include <stdio.h>
#include <stdlib.h>

// solicitar dois inteiros e exibir operações aritméticas
int main() {
    int num1, num2;
    printf("Digite 2 numeros inteiros:\n");
    scanf("%d%d", &num1, &num2);

    printf("\nSoma: %d", num1 + num2);
    printf("\nSubt: %d", num1 - num2);
    printf("\nMult: %d", num1 * num2);
    printf("\nDivi: %d", num1 / num2);
    printf("\nRest: %d", num1 % num2);


    printf("\n");
    system("pause");
    return 0;

}