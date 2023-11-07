#include <stdio.h>
int main ()
{
    float radius, side, length, width,circleArea,circlePerimeter,squareArea,squarePerimeter,rectangleArea,rectanglePerimeter;
    //Get input values from the user
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    printf ("Enter the side of the square: ");
    scanf("%f",&side);

    printf("Enter the length of the rectangle: ");
    scanf("%f",&length);

    printf("Enter the width of the rectangle: ");
    scanf("%f",&width);

    //Calculate the area and perimeter for each shape
    circleArea =3.142 * radius * radius;
    circlePerimeter =2*3.142*radius;

    squareArea = side*side;
    squarePerimeter = 4*side;

    rectangleArea= length*width;
    rectanglePerimeter=2*(length+width);

    //Display the calculated values
    printf("Circle: \n");
    printf("Area: %.f\n",circleArea);
    printf("Perimeter: %.f\n",circlePerimeter);

    printf("\nSquare: \n");
    printf("Area: %.f\n",squareArea);
    printf("Perimeter: %.f\n",squarePerimeter);

    printf("\nRectangle: \n");
    printf("Area: %.2f\n", rectangleArea);
    printf("Perimeter: %.2f\n",rectanglePerimeter);

    return 0;

}