#include <stdio.h>

int main()
{
    float x;
    float y;

    printf("Unesite prvi broj\n");
    scanf("%f", &x);

    printf("Unesite drugi broj\n");
    scanf("%f", &y);

    float suma = x + y;

    printf("Suma dva broja je: %.2f", suma);

    return 0;
}
