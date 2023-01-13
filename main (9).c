#include<stdio.h>
 int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("\n address of i= %u ", &i);
    printf("\n address of i= %u ",j);
    printf("\n addressof i= %u ",*k);
    printf("\naddress of j= %u ",&j);
    printf("\naddress of j= %u ",k);
    printf("\naddress of k= %u ",&k);
    printf("\nvalue of j= %u",&k);
    printf("\nvalue of k= %u",k);
    printf("\nvalue of i= %d",i);
    printf("\nvalue of i= %d",*(&i));
    printf("\nvalue of i= %d",*j);
    printf("\nvalue of i= %d",k);
}