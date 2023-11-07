#include <stdio.h>
int main()
{
	printf("Enter Students Marks (0-100): ");
	int avgmarks;

	scanf("%d", &avgmarks);
	if (avgmarks <= 100){
		if (avgmarks <= 80){
			if (avgmarks <= 60){
				if (avgmarks <= 40){
					if (avgmarks <= 20){
						printf("F: Student Failed.");
					}else{
						printf("D3: Student archived Division 1.");
					}
				}else{
					printf("D2: Student archived Division 1.");
				}
			}else{
				printf("D1: Student archived Division 1.");
			}

		}else{
			printf("H: Student archived Honours Grade.");
		}
	}else{
		printf("Enter a valid number!");
	}
	printf("\n");
	return 0;
}