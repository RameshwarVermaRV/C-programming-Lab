#include<stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while(num != 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("Sum of digits is: %d", sum);

return 0;
}