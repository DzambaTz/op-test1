#include <stdio.h>

int main()
{
    int a;

    printf("Unesite neki broj: ");
    scanf("%i", &a);

    short ostatakPriDijeljenju;

    ostatakPriDijeljenju = a & 1;
    if (ostatakPriDijeljenju == 0)
    {
        printf("Uneseni broj je paran!");
    }
    else
    {
        printf("Uneseni broj je neparan!");
    }

    return 0;
}
