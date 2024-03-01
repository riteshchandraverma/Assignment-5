#include<stdio.h>
int main()
{
    int Dividend,Divisor,r,q=0;
    printf("Enter Dividend and Divisor:\n");
    scanf("%d%d",&Dividend,&Divisor);
    r=Dividend;
    while (r>=Divisor)
    {
        r=r-Divisor;
        q++;
    }
    printf("Quotient=%d\nRemainder=%d",q,r);
    return 0;
}