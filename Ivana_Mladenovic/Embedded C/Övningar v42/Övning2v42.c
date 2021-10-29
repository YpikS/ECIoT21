#include <stdio.h>
void klassLista(void);
int main(void)
{
    klassLista();
    return 0;
}
void klassLista(void)
{
    char f_namn[][256]={"Ivana", "Elin", "William", "John"};
    char e_namn[][256]={"Mladenovic", "Sundbom", "Hagelin"};
    //kollar hur m�nga element det finns i f�rsta f�ltet 'a'
    //resultatet sparas i variabeln freknare
    size_t freknare=(sizeof(f_namn)/sizeof(f_namn[0]));
    //kollar hur m�nga element det finns i f�ltet 'b'
    size_t ereknare=(sizeof(e_namn)/sizeof(e_namn[0]));
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
        printf("\n%s %s\n", f_namn[i], e_namn[i]);
    }
    
    
}