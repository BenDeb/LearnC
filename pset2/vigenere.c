#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2) 
    {
        for(int c = 0; c < strlen(argv[1]); c++)
        {
            if(!isalpha(argv[1][c]))
            {
                printf("les arguments doivent être composés de lettres\n");
                return 1;
            }
        }
    
        string key = argv[1];
        printf("plaintext:");
        string msg = get_string();
        int i = 0;
        int j = 0;
        int n = strlen(key);
        
        printf("ciphertext:");
        while(msg[i] != '\0')
        {
            if (j == n)
            {
                j = 0;
            }
            if (isupper(msg[i]))
            {
                key[j] = toupper(key[j]);
                printf("%c", (msg[i] + key[j] - 2 * 'A') % 26 + 'A');
                j++;
            }
            else if (islower(msg[i]))
            {
                key[j] = tolower(key[j]);
                printf("%c", (msg[i] + key[j] - 2 * 'a') % 26 + 'a');
                j++;
            }
            else
            {
                printf("%c", msg[i]);
            }
            i++;
        }
        printf("\n");
        return 0;
    }
    else
    {
        printf("1 argument");
        return 1;
    }
}
