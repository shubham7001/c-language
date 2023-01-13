#include<stdio.h>
void main()
{
    int i,n,a[100];
    printf("input number of elments in an array:");
    scanf("%d",&n);
    printf("input %d elments in array",n);
    for (i=0;i<n;i++)
    {
        printf("elements %d",i);
        scanf("%d",&a[i]);
    }    
        printf("value stored in an array in reverse order \n");
        for(i=n-1;i>=0;i--)
        {
            printf("%d\n",a[i]);
        }
    
}
