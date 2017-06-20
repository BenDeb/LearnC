#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int sum1 = 0;
    int sum2 = 0;
    int digit1 = 0; /* numéros en partant de l'avant dernier, à multiplier par 2*/
    int digit2 = 0; /* numéros en partant du dernier, à ne pas multiplier par 2*/
    
    printf("Numéro carte : ");
    long long card = get_long_long() ;
    
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
        /*printf("%lld\n", newcard);
        printf("%i\n", digit1);
        printf("%i\n", digit2);
        printf("%i\n", sum1);
        printf("%i\n", sum2);*/
    }
    int total = sum1 + sum2;
    int cardtypeAM = floor(card/10000000000000);
    int cardtypeMC = floor(card/100000000000000);
    int cardtypeVS = floor(card/1000000000000000);
    
    if (total % 10 == 0)
    {
        if (cardtypeAM == 37 || cardtypeAM == 34)
        {
            printf("AMEX\n");
        }
        else if (cardtypeMC == 51 || cardtypeMC == 52 || cardtypeMC == 53 || cardtypeMC ==  54 || cardtypeMC == 55)
        {
            printf("MASTERCARD\n");
        }
        else if (cardtypeVS == 4)
        {
            printf("VISA\n");
        }
    }
    else 
    { 
        printf("INVALID\n"); 
    }
    return 0;
}
