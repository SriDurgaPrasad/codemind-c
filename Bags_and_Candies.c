#include<stdio.h>
int main()
{
    int n,m,k,b;
    scanf("%d%d%d",&n,&m,&k);
    b=(n%(k*m)==0)?(n/(k*m)):(n/(k*m)+1);
    printf("%d",b);
}