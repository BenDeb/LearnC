#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    string s = get_string();
    int n = 0;
    //entre chaque string, dans la mémoire, se trouve un espace vide de 8 bits qui valent 0
    //ici on incrémente tant que le nième caractère de la chaine s ne vaut pas 0 (pas vide)
    //représenté par \0
    while (s[n] != '\0')
    {
        printf("%c", tolower(s[n]));
        n++;
    }
    printf("\n");
}
