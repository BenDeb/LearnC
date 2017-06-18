#include <stdio.h>
#include <cs50.h>
#include <math.h>


void change(float m);
int main(void)
{
    float m;
    do
    {
        printf("entrez la somme d\'argent (format xx.xx : ");
        m = get_float();
    } while (m < 0);
    change(m);
    return 0;
    
}

void change(float m)
{
    int p1 = 0;
    float r = (m*100);
    r = roundf(r);
    do
    {
        if (r >= 25.0)
        {
            p1++;
            r = roundf(r);
            r -= 25;
        }
        else if (r < 25.0 && r >= 10)
        {
            p1++;
            r = roundf(r);
            r -= 10;
        }
        else if (r < 10.0 && r >= 5)
        {
            p1++;
            r= roundf(r);
            r -= 5;
        }
        else if (r < 5.0 && r > 0)
        {
            p1++;
            r = roundf(r);
            r -= 1;
        }
    }
    while (r > 0);
    printf("%i\n", p1);
    
}
