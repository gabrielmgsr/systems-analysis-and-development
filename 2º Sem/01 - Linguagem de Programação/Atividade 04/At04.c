#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[200];
    int i, tamanho, cont = 0;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    tamanho = strlen(frase);

    for(i = 0; i < tamanho; i++) {
        if(frase[i] != ' ' && frase[i] != '\n') {
            cont++;
        }
    }
    printf("\nQuantidade de caracteres (sem espacos): %d\n", cont);

    printf("Frase em maiusculas: ");
    for(i = 0; i < tamanho; i++) {
        printf("%c", toupper(frase[i]));
    }

    printf("\nFrase ao contrario: ");
    for(i = tamanho - 1; i >= 0; i--) {
        if(frase[i] != '\n') {
            printf("%c", frase[i]);
        }
    }

    printf("\nSubstituindo 'a' por '@': ");
    for(i = 0; i < tamanho; i++) {
        if(frase[i] == 'a' || frase[i] == 'A') {
            printf("@");
        } else {
            printf("%c", frase[i]);
        }
    }

    return 0;
}