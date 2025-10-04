// Figura 2.13 - página 62
#include <stdio.h>

// função main recebe dois números, os compara e exibe os resultados
int main(void)
{
    // declara as variáveis
    int numero1, numero2;

    // solicita e lê valor para as variáveis
    printf("Digite dois numeros inteiros:\n");
    scanf("%d%d", &numero1, &numero2);
    
    //compara e exibe os resultados
    if ( numero1 == numero2)
    {
        printf("%d igual a %d\n", numero1, numero2);
    }

    if (numero1 != numero2)
    {
        printf("%d diferente de %d\n", numero1, numero2);
    }

    if (numero1 < numero2)
    {
        printf("%d menor que %d\n", numero1, numero2);
    }

    if (numero1 > numero2)
    {
        printf("%d maior que %d\n", numero1, numero2);
    }

    if (numero1 <= numero2)
    {
        printf("%d menor ou igual a %d\n", numero1, numero2);
    }

    if (numero1 >= numero2)
    {
        printf("%d maior ou igual a %d\n", numero1, numero2);
    }

    return 0;
} // fim da função main