#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
  string nom = get_string();
  //on boucle sur les éléments de la chaine nom, jusqu'à la fin
  while(nom[i] != '\0')
  {
    //si l'élement est un espace, on incrémente
    if(nom[i] == ' ')
    {
      i++;
    }
    //sinon si l'élément n'est pas un espace, deux choix :
    else if(nom[i] != ' ')
    {
      //si l'élément précédent est un espace, ou qu'il est NUL(le début)
      //on affiche l'élément actuel
      if(nom[i - 1] == ' ' || nom[i - 1] == '\0')
      {
        printf("%c", toupper(nom[i]));
        i++;
      }
      //sinon, on continue d'incrémenter
      else
      {
        i++;
      }
    }
  }
  printf("\n");
}
