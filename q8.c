#include<stdio.h>
#include<math.h>
void main(){

    float c,s,r,x,w;

        printf(" lets start operating on a circle");
        printf("\nplease enter the radius of the circle");
        scanf("%f",&c);
        printf("area of circle = %f",3.14*c*c);
        printf("\nperimeter of circle = %f",2*3.14*c);


        printf(" lets start operating on a sqaure");
        printf("\nplease enter the side of the square");
        scanf("%f",&s);
        printf("area of square = %f",s*s);
        printf("\nperimeter of square = %f",4*s);

        printf(" lets start operating on a rectangle");
        printf("\nplease enter the length of the rectangle");
        scanf("%f",&r);
        printf("\nplease enter the width of rectangle");
        scanf("%f",&w);
        printf("area of rectangle = %f",r*w);
        printf("\nperimeter of rectangle = %f",2*(r+w));

}

