#include<stdio.h>
int main()
{
    float u,b,sc;
    scanf("%f",&u);
    if(u<=199){
       b=u*1.20; 
    }
    else if(u>=200&&u<400){
        b=u*1.50;
    }
    else if(u>=400&&u<600){
        b=u*1.80;
    }
    else if(u>=600){
        b=u*2.00;
    }
    if(b>400){
        sc=b*15/100;
        b=b+sc;
        printf("%.2f",b);
    }
    else
    {
        sc=100;
        b=b+sc;
        printf("%.2f",b);
    }
    
}