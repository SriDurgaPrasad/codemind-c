#include<stdio.h>

int main()
{
    
    int a,b,c,max,mid;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        max=a;
        mid=(b>c)?b:c;
    }
    else if(b>a && b>c){
        max=b;
        mid=(a>c)?a:c;
    }
    else{
        max=c;
        mid=(a>b)?a:b;
    }
    printf("%d",max+mid);
    
    return 0;
}