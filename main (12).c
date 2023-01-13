 #include<stdio.h>
long int rec(int x);
void main()
{
    int a,fact;
    printf("\n enter any number:");
    scanf("%d",&a);
    fact=rec(a);
    printf("factorial value=%d",fact);
}
long int rec(x)
 {
    int f;
    if(x==1)
    return (1);
    else
    
        f=x*rec(x-1);
        return f;
    
 }
