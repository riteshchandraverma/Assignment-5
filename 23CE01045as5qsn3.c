#include<stdio.h>
void rearrange(int a,int b,int c,int d){
    printf("%d%d%d%d\n",a,b,c,d);
    printf("%d%d%d%d\n",a,b,d,c);
    printf("%d%d%d%d\n",a,c,b,d);
    printf("%d%d%d%d\n",a,c,d,b);
    printf("%d%d%d%d\n",a,d,b,c);
    printf("%d%d%d%d\n",a,d,c,b);
    printf("%d%d%d%d\n",b,a,c,d);
    printf("%d%d%d%d\n",b,a,d,c);
    printf("%d%d%d%d\n",b,c,a,d);
    printf("%d%d%d%d\n",b,c,d,a);
    printf("%d%d%d%d\n",b,d,a,c);
    printf("%d%d%d%d\n",b,d,c,a);
    printf("%d%d%d%d\n",c,a,b,d);
    printf("%d%d%d%d\n",c,a,d,b);
    printf("%d%d%d%d\n",c,b,a,d);
    printf("%d%d%d%d\n",c,b,d,a);
    printf("%d%d%d%d\n",c,d,a,b);
    printf("%d%d%d%d\n",c,d,b,a);
    printf("%d%d%d%d\n",d,a,b,c);
    printf("%d%d%d%d\n",d,a,c,b);
    printf("%d%d%d%d\n",d,b,a,c);
    printf("%d%d%d%d\n",d,b,c,a);
    printf("%d%d%d%d\n",d,c,a,b);
    printf("%d%d%d%d\n",d,c,b,a);
}
int main()
{
    int n;
    printf("Enter a 4 digit number:\n");
    scanf("%d",&n);
    int n1,n2,n3,n4;
    n1=n/1000;
    n2=(n/100) % 10;
    n3=(n/10)%10;
    n4=n%10;
    rearrange(n1,n2,n3,n4);
    return 0;
}