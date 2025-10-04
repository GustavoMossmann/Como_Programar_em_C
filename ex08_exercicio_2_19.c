// exercicio 2.19 página 70
#include <stdio.h>
#include <stdlib.h>

// solicitar 3 inteiros e exibir o maoir ou se são iguais
int main()
{
    int num1, num2, num3;
    printf("Digite 3 numeros inteiros:\n");
    scanf("%d%d%d", &num1, &num2, &num3);

    // resultados
    printf("\n\nSoma: %d", num1 + num2 + num3);

    printf("\nMedia: %.2f", (num1 + num2 + num3) / 3.0);

    printf("\nProduto: %d", num1 * num2 * num3);

    // comparação menor
    if (num1 < num2 && num1 < num3)
    {
        printf("\n%d menor", num1);
    }

    if (num2 < num1 && num2 < num3)
    {
        printf("\n%d menor", num2);
    }

    if (num3 < num2 && num3 < num1)
    {
        printf("\n%d menor", num3);
    }

    // comparação maior
    if (num1 > num2 && num1 > num3)
    {
        printf("\n%d maior", num1);
    }

    if (num2 > num1 && num2 > num3)
    {
        printf("\n%d maior", num2);
    }

    if (num3 > num2 && num3 > num1)
    {
        printf("\n%d maior", num3);
    }


    printf("\n");
    system("pause");
    return 0;
}