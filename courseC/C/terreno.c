#include <stdio.h>

int main(){

    double width, height, amount, price, area;

    printf("Digite a largura do terreno: ");
    scanf("%lf", &width);

    printf("Digite a altura do terreno: ");
    scanf("%lf", &height);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &amount);

    area = width * height;
    price =  area * amount;

    printf("\nArea do terreno: %.2lf \n", area);
    printf("Preco terreno: %.2lf \n", price);

}
