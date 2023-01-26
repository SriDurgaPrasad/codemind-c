#include<stdio.h>

int main()
{
    
    int n,k,x,y,u,uc,rc;
    scanf("%d %d %d %d",&n,&k,&x,&y);
    u=n-k;
    rc=k*x;
    uc=((rc+(u*y))>(rc+(u*x)))?(u*x):(u*y);
    printf("%d",rc+uc);
    
    return 0;
}