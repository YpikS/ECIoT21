#include <stdio.h>
int main(void)
{   //Om jag l�gger in '\0' som avslut i arrayen f�r jag varning
    char mychar[]={'B', 'a', 'b', 'y', 's', 'h', 'a', 'r', 'k'};
    for(int i=0; i<=(sizeof(char)/sizeof(mychar[0])); i++)
    {
        //Varf�r f�r jag bara 'Ba' i utskrift??
    printf("%c", mychar[i]);
    }
    return 0;
}