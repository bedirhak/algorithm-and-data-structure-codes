#include <stdio.h>

int sum(int number1, int number2) {

	int summation = number1 + number2;

	return summation;
}

void summ(int a, int b) {

	printf("Sum is : %d\n", (a + b));
}


void swap(int a, int b) {


	printf("a: %d and b: %d\n", a, b);

	// burada swap yapıcam 

	//a = a + b; // a + b var 

	//b = a - b; // b = a elde edildi

	//a = a - b; // a = b elde edildi 

	a = a * b;

	b = a / b;

	a = a / b;

	a++;

	printf("a: %d and b: %d\n", a, b);

}


double faktoriyel(int num) {

	double start = 1;

	for (; num > 0; num--) {
		start *= num;
		printf("Current faktoriyel: %f\n", start);
	}

	return start;
}


int main() {

	//int num1, num2;

	//printf("Enter two numbers: ");
	//scanf_s("%d %d", &num1, &num2);

	//printf("Num1: %d and Num2: %d\n", num1, num2);


	//int sumOfUsersValues = sum(num1, num2);

	//printf("Sum is : %d\n", sumOfUsersValues);

	//summ(num1,num2);

	//printf("Sum is : %d\n", sum(12, 98));

	//summ(15,1452541);



	//int a = 15;
	//int b = 10;

	//int nums[] = { 1,2 };


	//swap(a, b);


	//printf("a: %d and b: %d\n", a, b);


	// Kullanıcıdan bir sayı al ve bunun faktoriyelini bul.

	double userNumber;

	printf("Enter a number:");
	scanf_s("%lf", &userNumber);

	double result = faktoriyel(userNumber);

	printf("%f", result);



	return 0;
}