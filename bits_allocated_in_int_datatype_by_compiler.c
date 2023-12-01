#include<stdio.h>
#include<limits.h>
int main()
{
   // Understanding the Limits and range of dataype int 
	printf("My gcc targets 32 bit system.\n");
	printf("Bytes stored by int %d");
	printf("Highest range of int on 32 bit systems: %d.\n", 2147483647);
	printf("1 + Highest range of int on 32 bit throws garbage value. eg: %d\n", (2147483647+1));
	printf("We can use Long double to fix it %ld.\n\n", 2147483647);
	printf("Min Range of Int data type: %d.\n", INT_MIN);
	printf("Max Range of Int data type: %d.\n", INT_MAX);
	return 0;
}
