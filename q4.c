#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum=%d\n",c);
    c=a-b;
    printf("subtract=%d\n",c);
    c=a*b;
    printf("multiply=%d\n",c);
    c=a/b;
    printf("divide=%d\n",c);
    return 0;
}