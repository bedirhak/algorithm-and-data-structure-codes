#include <stdio.h>


int main() {

	// [1,1.2,'d',"hello"]
	
	int numbers[] = { 1,2,3,4,5 };

	float nums[] = { 1.0, 2.5, 3.4 };

	// printf("%d", numbers[3]);

	int userValues[5];

	int sum = 0;


	//printf("Your 0 index value is: %d", userValues[0]);

	for (int i = 0; i < 5; i++) {
		break;
		printf("Enter your values: ");
		scanf_s("%d", &userValues[i]);
	}

	for (int i = 0; i < 5; i++) {
		break;
		printf("Your %d. value is: %d\n",i, userValues[i]);

		sum += userValues[i];
	}

	//printf("Summation of your values: %d", sum);

	// Çok satýrlý arrayler 

	/*
	 1  2  3 
	 2  5  63
	 14 2  41
	*/

	int matris[3][3];

	/*

	3 15 2 11 1 0 89 80 81
	
	j = 0
	i = 0
	i = 1
	i = 2

	j = 1
	i = 0
	
	
	
	*/

	int i, j;

	sum = 0;


	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
			printf("Enter your value: ");
			scanf_s("%d", &matris[j][i]);
		}
	}


	for (j = 0; j < 3; j++) {
		for (i = 0; i < 3; i++) {
			printf("%d ", matris[j][i]);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++) {
		sum += matris[i][1];

	}


	printf("Sum of first row is : %d", sum);

	return 0;
}