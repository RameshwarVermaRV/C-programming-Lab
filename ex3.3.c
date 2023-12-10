#include<stdio.h>
int main()
 {
    int choice;
    float side, length, breadth, radius, area, perimeter;

    printf("Choose the shape:\n1. Circle\n2. Square\n3. Rectangle\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        perimeter = 2 *3.14 * radius;
        printf("Area of the circle is: %.2f\n", area);
        printf("Perimeter of the circle is: %.2f\n", perimeter);
    } else if(choice == 2) {
        printf("Enter the side of the square: ");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        printf("Area of the square is: %.2f\n", area);
        printf("Perimeter of the square is: %.2f\n", perimeter);
    } else if(choice == 3) {
        printf("Enter the length and breadth of the rectangle: ");
        scanf("%f%f", &length, &breadth);
        area = length * breadth;
        perimeter = 2 * (length + breadth);
        printf("Area of the rectangle is: %.2f\n", area);
        printf("Perimeter of the rectangle is: %.2f\n", perimeter);
    } else {
        printf("Invalid choice!\n");
    }
return 0;
}