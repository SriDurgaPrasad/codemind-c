#include<stdio.h>

int main()
{
    
    int aa,ab,ac,ba,bb,bc,d,c,co,nco;
    scanf("%d %d
%d %d %d
%d %d %d",&d,&c,&aa,&ab,&ac,&ba,&bb,&bc);
    co=aa+ab+ac+ba+bb+bc+c;
    if(aa+ab+ac>=150 && ba+bb+bc>=150) co+=0;
    if(aa+ab+ac<150 | ba+bb+bc<150) co+=d;
    if(aa+ab+ac<150 && ba+bb+bc<150) co+=(2*d);
    nco=aa+ab+ac+ba+bb+bc+(2*d);
    if(co<nco)
    printf("YES");
    else
    printf("NO");
    
    return 0;
}