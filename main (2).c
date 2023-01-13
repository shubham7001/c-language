#include<stdio.h>
int main()
{
    int arr[50],pos,num,i;
    printf("enter no of elements:");
    scanf("%d",&num);
    printf("enter %d elements in array:",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position to delete:");
    scanf("%d",&pos);
    if (pos>=num+1)
    {
        printf("deletion is not possible:");
    }
    else
    {
        for(i=pos-1;i<num-1;i++)
        {
            arr[i]=arr[i+1];
        }
        printf("new array:");
        for(i=0;i<num-1;i++)
        {
            printf("%d",arr[i]);
        }
        
    }
    
}