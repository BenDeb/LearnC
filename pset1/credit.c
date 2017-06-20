#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int digit1 = 0; /* numéros en partant de l'avant dernier, à multiplier par 2*/
    int digit2 = 0; /* numéros en partant du dernier, à ne pas multiplier par 2*/
    int sum1 = 0; /* somme numéros digit1 */
    int sum2 = 0; /* somme numéros digit2 */

    printf("Numéro carte : ");
    long long card = get_long_long() ;
    printf("%lld\n", card); 

    for (long long newcard = card; newcard > 0; newcard /= 10)
    {
        digit2 = newcard % 10;
        sum2 += digit2;
        newcard /= 10;
        digit1 = newcard % 10;
        digit1 = digit1 * 2;
        if (digit1 > 9)
        {
            sum1 += digit1 % 10;
            sum1 += floor(digit1/10);
        }
        else
        {
            sum1 += digit1;
        }
        printf("%lld\n", newcard);
        printf("%i\n", digit1);
        printf("%i\n", digit2);
        printf("%i\n", sum1);
        printf("%i\n", sum2);
    }
    int total = sum1 + sum2;
    if (total % 10 == 0)
    {
        printf("Cette carte est valide!");
    }
    else { printf("Carte invalide!"); }
}
