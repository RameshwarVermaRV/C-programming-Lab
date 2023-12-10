#include<stdio.h>
int main()
{
    int marks[3][3],r,c;
    for(r=0;r<3;r++)
    {
       for(c=0;c<3;c++){
        printf("\nEnter value at marks[%d][%d] :",r,c);
        scanf("%d",&marks[r][c]);
       }
    }
    printf("\n2d array values are : \n\n");
    for(r=0;r<3;r++){
        printf("\nROW %d : ",r); 
        for(c = 0; c < 3; c++) {
        printf("%d ",marks[r][c]);

    }
    printf("\n-------------");
}
return 0;
}