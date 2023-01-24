#include<stdio.h>
int main()
{
    int n;
    float bill,sc,u;
    scanf("%d",&n);
    if(n<=199)
    {
        u=1.2;
        bill=n*u;
    }
    else if(n>=200 && n<400)
    {
        u=1.4;
        bill=n*u;
    }
    else if(n>=400 && n<600)
    {
        u=1.60;
        bill=n*u;
    }
    else if(n>=600 && n<800)
    {
        u=1.8;
        bill=n*u;
    }
    else if(n>=800)
    {
        u=2;
        bill=n*u;
    }
    if(bill>400)
    {
        sc=0.15*bill;
    }
    else
    {
        sc=0.00;
    }
    float tb=bill+sc;
    printf("Units Consumed: %d
",n);
    printf("Cost per Unit: %.2f
",u);
    printf("Bill: %.2f
",bill);
    printf("Surcharge: %.2f
",sc);
    printf("Total Amount: %.2f
",tb);
    
    
}