// exercicio 2.23 página 71
#include <stdio.h>
#include <stdlib.h>

// maior e menor inteiro
int main() {

    int num1, num2, num3, num4, num5;

    printf("Digite 5 numeros inteiros:\n");
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    // comparação para maior
    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5) {
        printf("\n\n%d eh o maior numero\n", num1);
    }

    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
    {
        printf("\n\n%d eh o maior numero\n", num2);
    }

    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
    {
        printf("\n\n%d eh o maior numero\n", num3);
    }

    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
    {
        printf("\n\n%d eh o maior numero\n", num4);
    }

    if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
    {
        printf("\n\n%d eh o maior numero\n", num1);
    }

    // comparação para menor
    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
    {
        printf("\n\n%d eh o menor numero\n", num1);
    }

    if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
    {
        printf("\n\n%d eh o menor numero\n", num2);
    }

    if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
    {
        printf("\n\n%d eh o menor numero\n", num3);
    }

    if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
    {
        printf("\n\n%d eh o menor numero\n", num4);
    }

    if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
    {
        printf("\n\n%d eh o menor numero\n", num5);
    }

    printf("\n");
    system("pause");
    return 0;

} // fim main