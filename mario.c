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
    while (x > 23 || x < 0);
    /*première boucle, on boucle n fois*/
    for (int j = 0; j < x; j++)
    {
        for (int r = x; r > j + 1; r--)
        {
            printf(" ");
        }
        for (int i = 0; i < j + 1; i++)
        {
            printf("#");
        }
        printf("  ");
        for (int k = 0; k < j + 1; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
