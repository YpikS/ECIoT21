#include <stdio.h>
//enum f�r namn 'f�rg'
typedef enum farg{spader = 0, ruter = 10, hjarter = 20, klever = 3};

int main(void)
{
    //skapar enum variabeln 'kort'
    enum farg kort;
    //anv�nder mig av sizof f�r att f� reda p� storleken av enum variabeln
    int storlek=sizeof(kort);
    printf("Storlek p� enum variabeln 'kort' �r %d bytes", storlek);
    return 0;
}