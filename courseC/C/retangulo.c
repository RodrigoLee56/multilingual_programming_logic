#include <stdio.h>
#include <math.h>

int main(){
    double base, height, area, perimeter, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);

    printf("Altura do retangulo: ");
    scanf("%lf", &height);

    area = base * height;
    perimeter = ((base + height) * 2);
    diagonal = sqrt(pow(base, 2.0)+ pow(height, 2.0));

    printf("\nAREA = %.4lf", area);
    printf("\nPERIMETRO = %.4lf", perimeter);
    printf("\nDIAGONAL = %.4lf", diagonal);

    return 0;
}
