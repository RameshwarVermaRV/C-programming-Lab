#include<stdio.h>

int main() 
{
    int i, num, n, max;

    printf("Enter the total count of numbers: ");
    scanf("%d", &n);

    printf("Number 1: ");
    scanf("%d", &max);

    for(i = 2; i <= n; i++) {
        printf("Number %d: ", i);
        scanf("%d", &num);

        if(num > max)
            max = num;
    }

    printf("Maximum of the entered numbers is: %d", max);

return 0;
}