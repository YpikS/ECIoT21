#include <stdio.h>
int main(void)
{
    int rader;
        printf("Ange �nskat antal rader: ");
        scanf("%d", &rader);
    //f�r i lika med 0; i mindre eller lika med antal rader; �ka med 1
    for (int i = 1; i <=rader; i++)
    {
        //f�r j lika med 1; j mindre eller lika med i; j �ka med 1
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}