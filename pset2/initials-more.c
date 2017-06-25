#include <stdio.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
    string nom = get_string();
    //on boucle sur les 
    for(int i = 0, n = strlen(nom); i < n; i++)
    {
        while(nom[i] != '\0')
        {
            if(nom[i] == ' ')
            {
                i++;
            }
            else if(nom[i] != ' ')
            {
                if(nom[i - 1] == ' ' || nom[i - 1] == '\0')
                {
                    printf("%c", toupper(nom[i]));
                    i++;
                }
                else
                {
                    i++;
                }
            }
        }
    }
    printf("\n");
}

