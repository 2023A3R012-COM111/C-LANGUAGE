#include <stdio.h>

int main()
{
    int numa, numb, numc;
	printf("Enter Number A: ");
	scanf("%d", &numa);
	printf("Enter Number B: ");
	scanf("%d", &numb);
	printf("Enter Number C: ");
	scanf("%d", &numc);

	if (numa >= numb){
		if (numa >= numc){
			printf("\nNumber A is Largest of all three.");
		} else {
			printf("\nNumber C is Largest of all three.");
		}
	} else {
		if (numb >= numc){
			printf("\nNumber B is Largest of all three.");
		} else {
			printf("\nNumber C is Largest of all three.");
		}
	}
	printf("\n");

	return 0;
}