#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string nom = get_string();
    //boucle sur les éléments de la chaine
    for(int i = 0, n = strlen(nom); i < n; i++)
    {
        //on affiche le premier élément de la chaine
        if(i == 0)
        {
        printf("%c", toupper(nom[0]));
        }
        //quand on arrive à un espace (' '), on affiche l'élément qui suit (donc la 1ère lettre du mot suivant)
        if(nom[i] == ' ')
        {
            printf("%c", toupper(nom[i+1]));
        }
    }
    printf("\n");
}
