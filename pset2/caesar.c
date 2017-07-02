#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        int key = atoi(argv[1]);
        printf("plaintext:");
        string texte = get_string();
        printf("ciphertext:");
        for (int i = 0, n = strlen(texte); i < n; i++)
        {
            if (isupper(texte[i]))
            {
                printf("%c", (texte[i] + key - 'A') % 26 + 'A');
            }
            else if (islower(texte[i]))
            {
                printf("%c", (texte[i] + key - 'a') % 26 + 'a');
            }
            else
            {
                printf("%c", texte[i]);
            }
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("NON!");
        return 1;
    }
    printf("\n");
    
}
