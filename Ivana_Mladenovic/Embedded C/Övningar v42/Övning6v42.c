#include <stdio.h>
void swap(int *a, int *b);
int main(void)
{
    int nr1=10;
    int nr2=20;
    printf("nr1 �r %d och nr2 %d �r \n", nr1, nr2);
    //funktionen tar emot adresser av nr1 och nr2
    swap(&nr1, &nr2);
    printf("Nu �r nr1 %d och nr2 %d\n", nr1, nr2);
    return 0;
}
void swap(int *a, int *b)
{
    //h�r skapas en tempor�r variabel temp f�r att lagra v�rdet av *a i den
    //annars om vi bara skriver *a=*b, *b=*a f�rloras v�rdet i *a och
    //utskriften blir samma v�rde i b�de nr1 och nr2
    int temp=*a;
    *a=*b;
    *b=temp;
}