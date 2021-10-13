#include <stdio.h>
//long long int d� personnr �r l�ngt
_Bool kontrolleraKon(_Bool kon, long long int pnr);
_Bool kontrolleraKon2(_Bool kon, long long int pnr);
void printPersonnummer(void);
int main(void)
{
    printPersonnummer();
    return 0;
}
//Funktion till att fr�ga och ta emot 
void printPersonnummer(void)
{   //k�n
    int kon;
    // Personnummer.
    long long int pnr;
    // Fr�gar efter k�net
    printf("Ange om du �r kvinna (0) eller man (1)?: \n");
    // Scanna in det
    scanf("%d", &kon);
    // Nu fr�gar efter pnr!
    printf("Ditt personnummer (utan minus)?\n");
    // long long digit/int
    scanf("%lld", &pnr);

    // Om vi f�r en 0:a i return betyder det att det icke st�mde.
    if (!kontrolleraKon(kon, pnr))
    {
        fflush(stdin);
        fflush(stdout);
        printf("Det kön du angav matchar inte med personnumret!\nVar god försök igen\n");
        // Rekursion
        printPersonnummer();
    }

    //N�r allt st�mmer
    printf("Du angav rätt kön med rätt personnummer!\n");
}
//Funktion till allt kontrollera personnummer
    _Bool kontrolleraKon(_Bool kon, long long int pnr)
{
    // Tar bort sista siffran
    pnr /= 10;

    // K�n kontrolleras med modulus som kollas restv�rdet
    if (((kon == 0) && ((pnr % 2) == 0)) || ((kon == 1) && ((pnr % 2) == 1)))
    {
        // Om det st�mmer returneras 1
        return 1;
    }    
}
