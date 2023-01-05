#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int arr[n],t=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i]*pow(2,t);
        t--;
    }
    printf("%d",sum);
}