#include <stdio.h> 
// C Program to illustrate how to use #define to declare 
// Defining macros with constant value 
#define PI 3.14159265359 
int main() 
{ 
    int radius=21;
	int area;

    area = PI * radius * radius; 

	printf("Area of Circle of radius %d: %d", radius, area); 

	return 0; 
}
