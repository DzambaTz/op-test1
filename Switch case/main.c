#include <stdio.h>

int main()
{
    int a;

    printf("Unesite broj: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Uneseni broj je 1!");
    case 2:
        printf("Uneseni broj je 2!");
    case 3:
        printf("Uneseni broj je 3!");
    case 4:
        printf("Uneseni broj je 4!");
    case 5:
        printf("Uneseni broj je 5!");
    case 6:
        printf("Uneseni broj je 6!");
    case 7:
        printf("Uneseni broj je 7!");
    case 8:
        printf("Uneseni broj je 8!");
    case 9:
        printf("Uneseni broj je 9!");
    default:
        printf("Uneseni broj nije prirodan!");
    }

    return 0;
}