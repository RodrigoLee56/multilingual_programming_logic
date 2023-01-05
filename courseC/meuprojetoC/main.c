#include <stdio.h>


void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {

    int n, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vect[n];

    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vect[i]);
    }

    printf("\nNÚMEROS DIGITADOS: \n");

    for (i = 0; i < n; i++) {
        printf("%.2lf\n",vect[i]);
    }

    return 0;
}
