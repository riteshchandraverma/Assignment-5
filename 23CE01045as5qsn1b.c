#include<stdio.h>
int main()
{
    int n,r,s=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("Sum of all digits:\n%d",&s);
    return 0;
}