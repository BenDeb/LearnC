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
    while (x > 23 || x < 0);
    /*première boucle, on boucle n fois*/
    for (int j = 0; j < x; j++)
    {
        /*1ère boucle intérieure, r = x, on boucle tant que r est supérieur à j + 1, on enlève 1 à r à chaque tour de boucle,
        cela signifie qu'à chaque tour de boucle on affiche un espace en moins
        */
        for (int r = x; r > j + 1; r--)
        {
            printf(" ");
        }
        /* 2ème boucle, on boucle tant que i - 1 < j + 1, et on ajoute 1 à i, donc à chaque tour de boucle on ajoute un # */
        for (int i = 0; i - 1 < j + 1; i++)
        {
            printf("#");
        }
        printf("\n");
        }
    }
