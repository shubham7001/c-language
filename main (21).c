#include<stdio.h>
#include<string.h>
int main()
{
    
   char str[100],rev[100];
   int i,j,count=0;
  scanf("%s",str);
  printf("string before reversing=%s",str);
  while(str[count]!='\0')
  {
      count++;
  }
  j=count-1;
  for(i=0;i<count;i++);
  {
      rev[i]=str[j];
      j--;
      
  }
    printf(" \n string after reversing %s",rev);
  
}   
   
   
