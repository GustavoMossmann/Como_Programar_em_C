// 2.20 página 70 - diâmetro, circunferência e área de um círculo
#include <stdio.h>
#include <stdlib.h>

int main() {
    int raio;
    // solicitar raio
    printf("Digite o raio: ");
    scanf("%d", &raio);

    // exibir resultados
    printf("\nDiametro: %d\nCircunferencia: %.2f\nArea: %.2f\n\n", raio*2, raio*3.14159*2, raio*raio*3.14159*2 );

    system("pause");
    return 0;

} // fim main