#include <stdio.h>
#include <stdlib.h>

char Desifruj(char* slovo)          
{
    int delka = strlen(slovo);

    printf("Desifra: ");
    for(int i = 0; i < delka; i++)
    {
        printf("%c", slovo[i]-1);
    }
    printf("\n");
}

char Sifruj(char* slovo)
{
    int delka = strlen(slovo);

    printf("Sifra: ");
    for(int i = 0; i < delka; i++)
    {
        printf("%c", slovo[i]+1);
    }
    printf("\n");
}

int main()
{
    char text[20];

    printf("Zadej slovo: ");
    scanf("%20s", text);
    //printf("%s", text);
    Sifruj(text);
    Desifruj(text);
}


