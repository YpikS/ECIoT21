#include <stdio.h>
#define STRL 3
int main(void)
{
    //Anv�ndaren skriver f�rsta g�ngen
    int a[STRL][STRL];//skapar 2D f�ltvariabel
    //Anv�ndaren skriver andra g�ngen
    int b[STRL][STRL];//skapar 2D f�ltvariabel
    //skapar en 2D f�r resultat
    int r[STRL][STRL];
    //Fr�gar anv�ndaren om inmatning
    printf("Mata in nummer i f�rsta matrisen 'a' %dx%d: \n", STRL,STRL);
    //rad
    for (int i = 0; i < STRL; i++)
    {   //kolumn
        for (int j = 0; j < STRL; j++)
        {
            scanf("%d", &a[i][j]);
        }  
    }
    printf("Mata i nummer f�r matrisen 'b' %dx%d: \n", STRL, STRL);
    //rad
    for (int i = 0; i < STRL; i++)
    {   //kolumn
        for (int j = 0; j < STRL; j++)
        {
            scanf("%d", &b[i][j]);
        } 
    }
    //Summering av alla f�lt i a och b
    for (int i = 0; i < STRL; i++)
    {
        for (int j = 0; j < STRL; j++)
        {
            r[i][j]=a[i][j]+b[i][j];
        } 
    }
    
    printf("Summan av matriser a+b= : ");
    for (int i = 0; i < STRL; i++)
    {
        for (int j = 0; j < STRL; j++)
        {
            printf("%d ", r[i][j]);
        }
        
    }
    printf("\n");
    return 0;
}