#include <stdio.h>
//M�ndag f�r plats nr 1 ist�llet f�r automatiskt 0
//d� blir det r�tt utskrift nedan 1-7 m�n-s�n
enum vecka {Man=1, Tis, Ons, Tor, Fre, Lor, Son };
int main()
{
    enum vecka dag;
    for (size_t i = Man; i <=Son; i++)
    {
        printf("%d\t", i);
    }
    

    return 0;
}