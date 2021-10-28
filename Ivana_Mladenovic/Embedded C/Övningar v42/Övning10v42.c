#include <stdio.h>
int main()
{
    // filpekaren
    FILE *filpkr;
    // char 
    char c[256];

    // �ppnar f�r l�sning (read)
    filpkr = fopen("ovning.txt", "r");

    // Kollar om fp finns
    if (!filpkr)
    {
        printf("filen finns inte!");
        return 0;
    }

    fscanf(filpkr, "%s", &c);
    printf("V�rde av c = %s\n", c);
    fclose(filpkr);

    // B�rjar om med filpekaren, �ppnar den f�r skriv/write
    filpkr = fopen("ovning.txt", "w");
    printf("Skriv in nytt ord:\n");

    char text[256];
    //nytt text sparas in
    scanf("%s", &text);

    fprintf(filpkr, "%s", &text);

    printf("Skrev %s till ovning.txt", text);
    fclose(filpkr);

    return 0;
}