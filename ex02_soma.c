// Figura 2.5 - página 53 - Progrma de Adição
#include <stdio.h>

// função main que recebe dos números e exibe a sua soma
int main(void)
{
    // declaração de variáveis
    int inteiro1;
    int inteiro2;
    int soma;

    // solicitação dos números para o usuário
    printf("Digite o primeiro numero inteiro:\n");
    scanf("%d", &inteiro1);

    printf("Digite o segundo numero inteiro:\n");
    scanf("%d", &inteiro2);

    // atribui o total a
    soma = inteiro1 + inteiro2;

    // exibe a soma
    printf("%d + %d = %d", inteiro1, inteiro2, soma);

    return 0;
} // fim da função main