#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{ 
    //�ppnas bara en g�ng
    srand(time(0));
    //Slumpar 4 heltal fr�n 0-RAND_MAX
    printf("Slumpar fyra heltal: %d, %d, %d, %d\n", rand(), rand(), rand(), rand());
    //Slumpar 4 flyttal
        printf("Nu slumpar fyra flyttal: %.2f, %.2f, %.2f, %.2f\n", (float)rand(), (float)rand(), (float)rand(), (float)rand());
    return 0;
}