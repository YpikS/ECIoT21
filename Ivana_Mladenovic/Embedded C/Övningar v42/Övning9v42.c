#include <stdio.h>
int main(void)
{
    // filpekaren
    FILE *filpkr;
    // char 
    char c[250];

    // H�r �ppnas filen fr�n f�reg�ende uppgiften med "r"- read
    filpkr = fopen("ovning.txt", "r");

    if (!filpkr)
    {
        printf("filen finns inte!");
        return 0;
    }
    /*            NIKLAS TIPS
    // Om du har flera str�ngar kan du anv�nda dig av denna kod

    while (1)
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        // Anv�nder int till char. Ja det g�r bra s� l�nge tecknet finns.
        printf("%c", c);
    }
    */

    // kommentera ut nedan om du har l�ngre str�ngar
    fscanf(filpkr, "%s", &c);
    printf("V�rde av c = %s", c);
    // filen st�ngs
    fclose(filpkr);
    return 0;
}