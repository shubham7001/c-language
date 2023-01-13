	#include<stdio.h>
	int main()
	{
	    int a[100],number,i,j,temp;
	    printf("\n enter total no of elements:");
	    scanf("%d",&number);
	    printf("\n enter array elements:");
	    for(i=0;i<number;i++)
	    {
        scanf("%d",&a[i]);
	    }
	    for(i=0;i<number-1;i++)
	    {
	        for(j=0;j<number-i-1;j++)
	        {
	            if(a[j]>a[j+1])
	            {
	                temp=a[j];
	                a[j]=a[j+1];	               
	                a[j+1]=temp;
	            }
	        }
	    }
	             printf("array in ascending order");
	             for(i=0;i<number;i++)
	             {
	                 printf("%d \t",a[i]);
	             }
	             printf("\narray in descending order");
	             for(i=number-1;i>=0;i--)
	             {
	                 printf("%d ",a[i]);
	             }
	             
	}

