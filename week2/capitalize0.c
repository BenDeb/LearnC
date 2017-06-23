#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main(void)
{

    // on demande à l'utilisateur d'entrer une chaine de caractères
    string s = get_string();
    // on vérifie que la chaine n'est pas vide
    if (s != NULL)
    {
	// on set i à 0, n à la longueur de la chaine s, et on incrémente i tant qu'il est inf. à n
        for (int i = 0, n = strlen(s); i < n; i++)
        {
	    // si le caractère sur lequel on boucle se situe entre 'a' (65 en ASCII) et 'z' (90 en ASCII)
            if (s[i] >= 'a' && s[i] <= 'z')
            {
		//on affiche le caractère - 32, ce qui va afficher ce même caractère mais en majuscule
		//ex : 'A' est 65, donc on fait 90 ('a') - 32
                printf("%c", s[i] - 32);
            }
            else
            {
		// sinon on affiche le caractère sans modification
                printf("%c", s[i]);
            }
        }
    }
}
