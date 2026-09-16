#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    int idade;
    printf("Qual a sua idade: ");
    scanf("%d",&idade);
    
    if (idade < 18){
        printf("Voce e menor de idade");
    }
    else{
        printf("Voce e maior de idade");
    }
    return 0;
}