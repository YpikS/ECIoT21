#include <stdio.h>
int main(void)
{
    int tid;
    printf("Ange antal sekunder: ");
    scanf("%d", &tid);
    int tim,min, sek;
    //3600=1h f�r att r�kna antal timmar delar vi med 3600 f�r att se
    //hur m�nga ggr 3600 g�r i antalen angivna sekunder
    tim=tid/3600;
    //resterande sekunder delas med 60 f�r att se hur m�nga ggr 60 g�r i dem
    min=(tid%3600)/60;
    //Den resten som blir kvar efter vi r�knat ut minuter blir antalet sek
    sek=(tid%3600)%60;
    printf("Det blir %d timmar, %d minuter och %d sekunder!", tim, min, sek);
    return 0;
}