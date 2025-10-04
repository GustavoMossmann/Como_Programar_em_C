// exercicio 2.18 página 70
#include <stdio.h>
#include <stdlib.h>

// solicitar dois inteiros e exibir o maoir ou se são iguais
int main()
{
    int num1, num2;
    printf("Digite 2 numeros inteiros:\n");
    scanf("%d%d", &num1, &num2);

    // comparação
    if (num1 > num2) {
        printf("\n%d > %d", num1, num2);
    } else {
        printf("\n%d > %d", num2, num1);
    }

    if (num1 == num2) {
        printf("\n%d = %d", num1, num2);
    }

    printf("\n");
    system("pause");
    return 0;
}