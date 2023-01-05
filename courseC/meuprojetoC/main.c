#include <stdio.h>


void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    double c, f ;
    char resp;

    do {

        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &c);
        f = 9.0 * c / 5.0 + 32.0;
        printf("Equivalente em Fahrenheit: %.1lf\n", f);
        printf("Deseja repetir (s/n)? ");
        limpar_entrada();
        scanf("%c", &resp);

    }
    while(resp == 's');

    return 0;
}
