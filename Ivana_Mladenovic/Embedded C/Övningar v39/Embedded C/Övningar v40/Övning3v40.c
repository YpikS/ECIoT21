#include <stdio.h>
#include <stdlib.h>

// Kontrollerar om vi kör windows eller inte
#ifdef _WIN32
  #include <windows.h>
  // mySleep blir som ett alias för Sleep (på win)
  #define mySleep(x) Sleep(x)
#else
  // allt annat förutom windows
  #include <unistd.h>
  // mySleep blir ett alias för usleep (unix)
  #define mySleep(x) usleep(x)
#endif

int main(void)
{
    // Enskilt tecken.
    char punkt = '.', streck = '-';

    // Avbryt med ctrl + c
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            printf("%c", punkt);
            // För att undvika flera rader har jag gjort ett makro för win och unix
            // Använd annars usleep() eller Sleep(), beroende på plattform
            mySleep(200);
        }
        
        mySleep(500);

        for (int j = 0; j < 3; j++)
        {
            printf("%c", streck);
            mySleep(200);
        }

        mySleep(500);

        for (int k = 0; k < 3; k++)
        {
            printf("%c", punkt);
            mySleep(200);
        }

        // Markerar avslut på morse med "\", eftersom \ symboliserar escape character
        // Måste vi escape \ med \\, annars kommer vi vilja skriva ut ett citationstecken. "
        printf(" / ");
        mySleep(500);
    }

    return 0;
}