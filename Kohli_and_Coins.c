#include<stdio.h>
int main()
{
    int c,n;
    scanf("%d",&n);
    if(n%5==0)
    {
        c=(n%10==0)?(n/10):((n/10)+1);
        printf("%d",c);
    }
    else 
    printf("-1");
}