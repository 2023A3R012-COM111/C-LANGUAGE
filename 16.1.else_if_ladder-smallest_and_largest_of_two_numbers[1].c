#include <stdio.h>
int main()
{
	// To find Largest of two numbers
	int num1, num2;
	printf("Enter num1: ");
	scanf("%d", &num1);

	printf("Enter num2: ");
	scanf("%d", &num2);

	if(num1>num2){
		printf("%d is greater than %d.", num1, num2);
	}else if(num1 == num2){
		printf("%d(num1) is equals to %d(num2).", num1, num2);
	}else{
		printf("%d is greater than %d.", num2, num1);
	}
	printf("\n");
    
	// To find Largest of two numbers
	printf("Enter num1: ");
	scanf("%d", &num1);

	printf("Enter num2: ");
	scanf("%d", &num2);

	if(num1<num2){
		printf("%d is smallest than %d.", num1, num2);
	}else if(num1 == num2){
		printf("%d(num1) is equals to %d(num2).", num1, num2);
	}else{
		printf("%d is smallest than %d.", num2, num1);
	}
	printf("\n");

	return 0;
}