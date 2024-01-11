#include <stdio.h>

#define rows 10
#define columns 2

// Program to take input from user and store
// in array, and then print all array in bulk

int main(){
	// Initialize a Array
	int arr[rows][columns];

	printf("Enter values for Array:\n\n");
	for (int i=0; i<rows; i++)
		for (int j=0; j<columns; j++){
			printf("Index %d, %d: ", i, j, j+1);
			scanf("%d", &arr[i][j]);
		}

	printf("\n\nElements of array:\n");
	for (int i=0; i<rows; i++)
		for (int j=0; j<columns; j++)
			printf("%d ", arr[i][j]);

	printf("\n");
	return 0;
}
