#include <stdio.h>
#include <math.h>
int main()
{
    int n1, num, r, result = 0, n = 0 ;
    printf("\n\n Check whether an n digits number is armstrong or not :\n");
    printf(" Input  an integer : ");
    scanf("%d", &n1);

     num = n1;
    
    while (num != 0)
    {
        num /= 10;
        ++n;
    }

    num = n1;

    while (onum != 0)
    {
        r = num % 10;
        result += pow(r, n);
        num /= 10;
    }

    if(result == n1)
        printf(" %d is an Armstrong number.\n\n", n1);
    else
        printf(" %d is not an Armstrong number.\n\n", n1);

    return 0;
}