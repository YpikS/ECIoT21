#include <stdio.h>
int main(void)
{   
    char mychar[]={'B', 'a', 'b', 'y',' ', 's', 'h', 'a', 'r', 'k','\0'};
    //s� l�nge str�ngen inte �r slut (\0) skriv ut
    for(int i=0; mychar[i]!='\0'; i++)
    {
        printf("%c", mychar[i]);
    }

    return 0;
}