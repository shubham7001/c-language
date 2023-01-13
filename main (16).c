#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int length;
    gets(str);
    length=strlen(str);
    printf("length=%d",length);
}