#include <stdio.h>

int main()
{

    int a = 5;

    printf("Unesite neki broj: ");
    scanf("%i", &a);

    if (a % 2 == 0)
    {
        printf("Uneseni broj je paran!");
    }
    else
    {
        printf("Uneseni broj je neparan!");
    }

    return 0;
}