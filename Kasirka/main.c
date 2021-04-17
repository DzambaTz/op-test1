#include <stdio.h>

int main()
{
    float cijenaJednogArtikla;
    int kolicinaArtikala;
    float kolicinaNovca;

    printf("Unesite cijenu jednog artikla: ");
    scanf("%f", &cijenaJednogArtikla);

    printf("Unesite kolicinu artikala: ");
    scanf("%d", &kolicinaArtikala);

    printf("Unesite kolicinu novca: ");
    scanf("%f", &kolicinaNovca);

    float ukupnaCijena = cijenaJednogArtikla * kolicinaArtikala;

    float kusur = kolicinaNovca - ukupnaCijena;

    printf("Kusur je: %.2f", kusur);

    return 0;
}
