 #include<stdio.h>
int checkprimenumber(int n);
int main()
{
    int n1,n2,i,flag;
    printf("enter two number:");
    scanf("%d %d",&n1,&n2);
    printf("prime numbers are:");
    for(i=n1+2;i<n2;i++)
    {
        flag=checkprimenumber(i);
        if(flag==1)
        {
            printf("%d ,",i);
        }
    }
    return 0;
}
int checkprimenumber(int n)
{
    int j,flag=1;
    for(j=2;j<=n/2;++j)
    {
        if(n%j==0)
        {
            flag=0;
            break;
        }
    }

 return flag;
}
