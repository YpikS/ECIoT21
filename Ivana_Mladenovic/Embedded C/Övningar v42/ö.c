#include <stdio.h>
// Max storlek f�r str�ng
#define MAX_STORLEK 100

int main()
{
    // Deklarerar en str�ng med storleken fr�n MAX_STORLEK
    char text[MAX_STORLEK];
    // Deklarerar pekare som pekar till text
    char *str = text;
    // r�knare
    int reknare = 0;

    // inmatning fr�n anv�ndaren.
    printf("Skriv in text: ");
    scanf("%s", &text);

    // Iterera till sista f�ltet av str�ngen
    while (*(str++) != '\0')
    {
        reknare++;
    }

    // Skriver ut l�ngden av str�ngen med hj�lp av r�knaren
    printf("L�ngd av '%s' = %d", text, reknare);

    return 0;
}