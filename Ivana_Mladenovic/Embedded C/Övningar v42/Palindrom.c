#include <stdio.h>
int main(void)
{
    char text[20];
    int start, mitt, slut, lengd=0;
    printf("Skriv ett ord du tror �r palindrom: \n");
    scanf("%s", &text);
    while(text[lengd] != '\0')
    {
        //r�knar +1 f�r varje varv
        lengd++;
    }
    //initierar slut med l�ngden av char -1 pga sista tomma elementet \0
    slut= lengd-1;
    //mitt f�r mittv�rde, hela l�ngden delat p� 2
    mitt= lengd/2;
    for (start = 0; start < mitt; start++)
    {
        if(text[start] =! text[slut])
        {
            printf("Det �r inte en palindrom!\n");
            break;
        }
        slut--;
    }
    if(start == mitt)
    {
        printf("Der �r ett palindrom!\n");
    }
    
    return 0;
}