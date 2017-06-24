#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string nom = get_string();

    for(int i = 0, n = strlen(nom); i < n - 1; i++)
    {
        if(i == 0)
        {
        printf("%c", toupper(nom[0]));
        }
        if(nom[i] == ' ')
        {
            printf("%c", toupper(nom[i+1]));
        }
        if(i == n)
        {
            break;
        }
    }
    printf("\n");
}
