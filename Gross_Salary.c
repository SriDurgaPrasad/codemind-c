#include<stdio.h>
int main()
{
    int bs,da,hra;
    scanf("%d%d%d",&bs,&da,&hra);
    float gs;
    if(bs<=10000){
        da=bs*80/100;
        hra=bs*20/100;
    }
    else if(bs<=20000){
        da=bs*90/100;
        hra=bs*25/100;
    }
    else if(bs>20000)
    {
        da=bs*95/100;
        hra=bs*30/100;
    }
    gs=bs+hra+da;
    printf("%.2f",gs);
}