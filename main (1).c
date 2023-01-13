#include<stdio.h>
#define N 10
void main()
{
   int a[N],i,p=0,n=0,z=0;
   printf(" enter %d elments ",N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
   {
       if(a[i]>0)
       p++;
       else if(a[i]<0)
       n++;
       else
       z++;
   }
   printf("positive number count %d:",p);
   printf("\n negative number count %d:",n);
   printf("\n zero number count%d:",z);
    
}
