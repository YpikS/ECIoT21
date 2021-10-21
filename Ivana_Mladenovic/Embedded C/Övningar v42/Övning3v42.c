#include <stdio.h>
#define BUF 256
int meny(void);
void inmatning();
void utskrift();

char fornamn[BUF][BUF];
char efternamn[BUF][BUF];

int main(void)
{
    meny();
    return 0;
}
int meny(void)
{
    int val;
    printf("Ange ett val:\n");
    printf("1. L�gg till klasskompis\n");
    printf("2. Visa klasslistan\n");
    scanf("%d", &val);
    switch (val)
        {
        case 1:
            inmatning();
            break;
        case 2:
            utskrift();
            break;
        default:
            printf("Du har angett fel val. V�nligen f�rs�k igen.");
            fflush(stdin);
            fflush(stdout);
            meny();
            break;
        }
}
void inmatning()
{ 
    printf("Ange f�rnamn:\n");
    int i=0;
    if(fornamn[i] <= BUF) 
    {
        scanf("%s", &fornamn[i][BUF]);
        i++;
    }
    printf("Ange efterrnamn:\n");
    if(efternamn[i] <= BUF)
    {
        scanf("%s", &efternamn[i][BUF]);
        i++;
    }
    
    fflush(stdin);
    fflush(stdout);
    meny();

}
void utskrift()
{
    //kollar hur m�nga element det finns i f�rsta f�ltet 'a'
    //resultatet sparas i variabeln freknare
    size_t freknare =(sizeof(fornamn)/sizeof(fornamn[0]));
    //kollar hur m�nga element det finns i f�ltet 'b'
    size_t ereknare =(sizeof(efternamn)/sizeof(efternamn[0]));
    size_t total;
    //om antal element i v.freknare �r olika av antal element i v.ereknare
    if (freknare != ereknare)
    {
        //felmeddelande
        printf("Antal f�rnamn och efternamn �r inte lika!\n");
        //skriver hur m�nga antal element finns i respektive f�lt
        printf("Det finns %d f�rnamn och %d efternamn i listan!", freknare, ereknare);
        return;
    }
    else
    {
        //variabel total f�r ett v�rde av antingen freknare eller ereknare d�
        //de �r lika stora, sedan anv�nds total i for-loopen nedan f�r utskrift
        total=freknare;
    }
    //skriver ut hela listan via for-loopen
    printf("I klasslistan finns: \n");
    for (size_t i = 0; i < total ; i++)
    {
        printf("%s %s\n", fornamn[i], efternamn[i]);
    }
    fflush(stdin);
    fflush(stdout);
    meny();
}