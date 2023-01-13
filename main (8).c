#include<stdio.h>
main()
{
    int i=3;
    int*j;
    j=&i;
    printf("address of i=%u",&i);
    printf("address of i=%u",j);
    printf("address of j=%u",&j);
    printf("value of j=%d",j);
    printf("value of i=%d",i);
    printf("value of i=%d",&i);
    printf("value of i=%d",*j);
}