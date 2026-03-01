#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int soma_total = 0;
    int soma_diagonal = 0;
    int maior, menor;

    printf("Digite os valores da matriz 3x3:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    printf("\nMatriz digitada:\n");

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%4d ", matriz[i][j]);

            soma_total += matriz[i][j];

            if(matriz[i][j] > maior)
                maior = matriz[i][j];

            if(matriz[i][j] < menor)
                menor = matriz[i][j];

            if(i == j)
                soma_diagonal += matriz[i][j];
        }
        printf("\n");
    }

    printf("\nResultados:\n");
    printf("Soma de todos os elementos: %d\n", soma_total);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Soma da diagonal principal: %d\n", soma_diagonal);

    return 0;
}