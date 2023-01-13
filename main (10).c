#include<stdio.h>
int fact(int val)
{
    int a,b=1;
    for(a=1;a<=val;a++)
    {
        b=b*a;
    }
    return b;
}
int main()
{
int n,count,final_result,rem,sum=0,temp;
printf("enter a number:");
scanf("%d",&n);
temp=n;
for(temp=n;n>0;n=n/10)
{
    rem=n%10;
    final_result=fact(rem);
    sum=sum+final_result;
}
     if(sum==temp)
     {
         printf("strong number");
     }
     else
     {
         printf(" not strong");
     }
     return 0;
    
}