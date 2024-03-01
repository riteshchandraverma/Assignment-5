#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter a nuber:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        n=n/10;
        count++;
    }
    printf("No. of digits:\n%d",count);
    return 0;
}