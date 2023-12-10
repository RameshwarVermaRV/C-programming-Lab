#include<stdio.h>

int main() {
    int num, i = 2, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(i <= num/2) {
        // condition for non-prime
        if(num % i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if (num == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if(flag == 0)
            printf("%d is a prime number.", num);
        else
            printf("%d is not a prime number.", num);
    }

return 0;
}