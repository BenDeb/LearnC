/*entrez une taille pour la pyramide : 5
    #  #
   ##  ##
  ###  ###
 ####  ####
#####  #####*/

#include <stdio.h>
#include <cs50.h>
void pyramid(void);

int main(void)
{
    
    pyramid();
    
}

void pyramid(void)
{
    int x;
    do
    {
        printf("entrez une taille pour la pyramide : ");
        x = get_int();
    }
    /* la taille doit se trouver entre 1 et 23 inclus
    while (x > 23 || x < 0);
    /*première boucle, on boucle n fois*/
    for (int j = 0; j < x; j++)
    {
      /*1ère boucle intérieure, gère les espaces à gauche*/
        for (int r = x; r > j + 1; r--)
        {
            printf(" ");
        }
        /*2ème boucle intérieure, gère les # à gauche*/
        for (int i = 0; i < j + 1; i++)
        {
            printf("#");
        }
        /* espace entre les 2 pyramides*/
        printf("  ");
        /*3ème boucle intérieure, gère les # à droite*/
        for (int k = 0; k < j + 1; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}

