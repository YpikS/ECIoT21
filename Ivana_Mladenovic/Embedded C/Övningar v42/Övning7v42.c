#include <stdio.h>
#include <windows.h>
#define BUF 100
int main(void)
{
    char text[BUF];
    printf("Skriv n�got: ");
    char *p = text;
    scanf("%s", &(*p));
    int reknare=0;
    for (int i = 0; i <= text[i] ; i++)
    {
        reknare++;
    }
    printf("Str�ngen '%s' �r %d tecken l�ng!", text, reknare);
    Sleep(1000);
    return 0;
}