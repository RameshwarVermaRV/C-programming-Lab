#include<stdio.h>
int main ()
{
    int i,n;
    for(i=1;i<=100;i++)
    {
        if(i%2==0||i%3==0||i%5==0 )
        { 
         printf("\n%d is  divisible 2 3 5",i);
        }
        else{
            printf("\n%d is not divisble by 2 3 5  ",i);
        }
    }
return 0;

}
