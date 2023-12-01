#include<stdio.h>
int main()
{
    int circlearea,squarearea,rectanglearea,trianglearea,radius,side,length,breadth,base,height,choice;

    printf("\n 1. area of square");
    printf("\n 2. area of circle");
    printf("\n 3. area of rectangle");
    printf("\n enter your desired choice");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        printf("enter the side of square: ");
        scanf("%d", &side);
        squarearea=side*side;
        printf("area of square: %d", squarearea);
        break;

        case 2:
        printf("enter the radius of circle: ");
        scanf("%d", &radius);
        circlearea=3.14*radius*radius;
        printf("area of circle: %d", circlearea);
        break;

        case 3:
        printf("enter the length of rectangle: ");
        scanf("%d", &length);
        printf("enter the breadth of rectangle: ");
        scanf("%d", &breadth);
        rectanglearea=length*breadth;
        printf("area of rectangle: %d", rectanglearea);
        break;

        default:
        printf("you have pressed a wrong key! \n");


    }
    return 0;


}
