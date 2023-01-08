#include <stdio.h>

int main(){

    double nota1, nota2, soma;

    printf("Informe o valor da 1ª nota: ");
    scanf("%lf", &nota1);

    printf("Informe o valor da 2ª nota: ");
    scanf("%lf", &nota2);

    soma = (nota1 + nota2);

    if(soma < 60.0){
        printf("NOTA FINAL %.1lf\n", soma);
        printf("REPROVADO");
    }else{
        printf("NOTA FINAL %.1lf\n", soma);
    }

    return 0;
}

