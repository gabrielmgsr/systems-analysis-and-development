#include <stdio.h>

int main (){
    float p, a, imc;

    printf("Digite seu peso: ");
    scanf("%f", &p);
    printf("Digite seu altura: ");
    scanf("%f", &a);
    imc = p / (a * a);
    if (imc < 18.5){
        printf("ABAIXO DO PESO!");
    }
    else if (imc >= 18.5 && imc < 25){
        printf("PESO NORMAL!");
    }
    else{
        printf("SOBREPESO!");
    }

    return 0;

}