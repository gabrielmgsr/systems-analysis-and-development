#include <stdio.h>

int main() {


    const int TAM = 5;
    int vetor[TAM];

    int opcao = 0;
    int soma;
    float media;


    printf("Digite %d valores inteiros:\n", TAM);
    for (int i = 0; i < TAM; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }


    while (opcao != 4) {

        printf("\nMENU:\n");
        printf("1 - Exibir todos os valores\n");
        printf("2 - Exibir apenas os valores pares\n");
        printf("3 - Calcular media dos valores\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);


        switch (opcao) {

            case 1:
                printf("Valores do vetor:\n");
                for (int i = 0; i < TAM; i++) {
                    printf("%d ", vetor[i]);
                }
                printf("\n");
                break;

            case 2:
                printf("Valores pares:\n");
                for (int i = 0; i < TAM; i++) {
                    if (vetor[i] % 2 == 0) {
                        printf("%d ", vetor[i]);
                    }
                }
                printf("\n");
                break;

            case 3:
                soma = 0;
                for (int i = 0; i < TAM; i++) {
                    soma += vetor[i];
                }
                media = (float)soma / TAM;
                printf("Media = %.2f\n", media);
                break;

            case 4:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }

    return 0;
}
