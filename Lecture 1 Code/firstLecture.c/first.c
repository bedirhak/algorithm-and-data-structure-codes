#include <stdio.h>

#define PI 3.14

int main() {

	//printf("Hello World\n");

	/*
		Char 1 byte 

		int 4 byte

		short 2 byte 

		float 4 byte

		double 8 byte 
		*/
	
	/*
	char firstLetter = 'c';

	int age = 24;
	int secondAge = 20;

	float percentageOfLecture = 75.2;

	double percentageOfLecture2 = 75.22524125241251;*/

	//printf("Your Age is : %d\n", age);
	//printf("Your Percentage is : %.2f", percentageOfLecture);

	////printf("Your Percentage is : %f", percentageOfLecture2);


	//printf("%d byte", sizeof(int));


/*	printf("%d\n", age + secondAge);
	printf("%d\n", age - secondAge);
	printf("%d\n", age * secondAge);
	printf("%d\n", age / secondAge);
	printf("%d\n", age % secondAge);*/ // 24 % 20 = 4


	/*printf("Burada %d\n", 2 - 3 + 4);
	printf("%d\n", 2 * 3 - 4);
	printf("%d\n", 2 - (3 / 4));
	printf("%d\n", 2 + 3 % 4);
	printf("%d\n", 2 / 3 * 4);
	printf("%d\n", 2 % 3 / 4);*/


	//int result;

	//result = r + (((c + (a*r)/b)/(r * (a/e))) /   ((b+2) / e) );

	/* Arttýrme ve Azaltmalar */


	//int number1 = 15;
	//int number2 = 25;

	//number1 = number2;


	//printf("Number1: %d\n", number1);

	//number1 = number1 + 1;

	//printf("Number1: %d\n", number1);

	//number1 += 1;

	//printf("Number1: %d\n", number1);

	//number1++ ;

	//printf("Number1: %d\n", number1); // 28 
	//printf("Number1: %d\n", number1++); // 29 ---> 28 

	//printf("Number1: %d\n", number1); // 29
	//printf("Number1: %d\n", ++number1); // 30 
	//printf("Number1: %d\n", --number1); // 29 
	//printf("Number1: %d\n", number1--); // 29
	//printf("Number1: %d\n", number1); // 28


	//int a = 10;
	//int b = 15;
	//int c = 20;

	//printf("a: %d, b: %d, c: %d\n", --a, --b, c++); // 9 14 20
	//printf("a: %d, b: %d, c: %d\n", a, b, c); //  9 14  21
	//printf("a: %d, b: %d, c: %d\n", a--, --b, c++); // 9 13 21
	//printf("a: %d, b: %d, c: %d\n", a, b, c);

	/* Dönüþümler */

	/*int num1 = 3;

	int num2 = 4;

	float num3 = 4.0;*/

	/*printf("%.2f\n", (float)num1 / num2);
	printf("%.2f\n", num1 / num3);

	printf("Result : %f\n", 3.2 / 2);*/

	//int yaricap;

	//float hacim;

	//printf("Kurenin yaricapini giriniz: ");
	//scanf_s("%d", &yaricap);

	//hacim = (4 / 3) * PI * (yaricap * yaricap * yaricap);

	//printf("%.3f", hacim);

	/*int a, b, c, d, e;

	printf("5 tane sayi giriniz:");
	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

	printf("%d %d %d %d %d ", a, b, c, d, e);*/


	/* ÝF */

//int studentNote;
//
//printf("Notunuzu giriniz:");
//scanf_s("%d", &studentNote);
//
//
//	if (studentNote > 85) {
//		printf("Takdir aldiniz.");
//	}
//	else if (studentNote > 70) {
//		printf("Teþekkür aldiniz.");
//
//
//	}
//	else {
//		printf("Fail.");
//
//	}

	//if (1) {
	//	printf("burada");
	//}
	//else {
	//	printf("hayýr burada");
	//}


//int note = 45;
//
//if (!(note > 50) || note < 43) {
//	printf("hello world");
//}
//else {
//	printf("hello bedirhan");
//}


/* 
ya da (or) ||
ve (and) &&

>, <, >=, >=, 

!
	

*/
//
//int islem;
//
//int bakiye = 1000;
//
//int tutar;
//
//printf("Ýslem Seciniz: \n 1: para cekme\n 2: para yatirma\n3: havale\n 4: Bakiye Sorgulama\n 5: Kart iade\n");
//scanf_s("%d", &islem);
//	
//switch (islem)
//{
//case 1:
//	printf("Çekmek istediginiz tutari giriniz: ");
//	scanf_s("%d", &tutar);
//	if (tutar < bakiye) {
//		bakiye -= tutar;
//		printf("Ýslem basarili. \n Kalan tutariniz: %d", bakiye);
//	}
//	else {
//		printf("Yeterli bakiniz yok");
//	}
//	break;
//
//case 2: 
//	printf("Yatirmak istediginiz tutari giriniz: ");
//	scanf_s("%d", &tutar);
//
//	bakiye += tutar;
//	printf("Güncel bakiyeniz: %d", bakiye);
//	break;
//
//case 3:
//	printf("Havale etmek istediginiz tutari giriniz: ");
//	scanf_s("%d", &tutar);
//	if (tutar < bakiye) {
//		bakiye -= tutar;
//		printf("Havale islemi basarili. \n Kalan tutariniz: %d", bakiye);
//	}
//	else {
//		printf("Yeterli bakiniz yok");
//	}
//	break;
//
//case 4: 
//	printf("Bakiyeniz: %d", bakiye);
//	break;
//case 5:
//	printf("Kart iade edildi.");
//	// döngünden çýkaran deðere gidiyorum.
//	
//default:
//	printf("defaulttasin");
//}


	
	/* Döngüler */
	
	/* for , while, do while */

	//for(int a= 0; a<2; a++) {
	//	printf("%d", a);

	//}

	/*printf("%d", a); a for içerisinde tanýmlandýðý için block harici kullanýlamaz */

	//int i = 0;

	//for (i = 0; i < 10; i++) {
	//	printf("%d\n", i);
	//}
	//
	//while (i < 20) {
	//	printf("%d\n", i);
	//	i++;
	//}

	//printf("Last i: %d", i);


	//do
	//{
	//	printf("%d\n", i);
	//	i++;
	//} while (i< 20);

	//printf("Left the loop");

	/* Fibonacci Number 
		
		1 , 1 , 2 , 3 , 5 , 8 , 13, 21, 34, 55
	
	*/

int numbers;

printf("Enter how many number you want to see: ");
scanf_s("%d", &numbers);

	int previousNumber = 1;
	int currentNumber = 0;

	int nextNumber=0;

	for (int i = 0; i < numbers; i++) {
		printf("CurrentNumber: %d\nPreviousNumber: %d\nNextNumber: %d\n", currentNumber, previousNumber, nextNumber);
		nextNumber = previousNumber + currentNumber;
		printf("%d. sayi: %d\n", (i + 1), nextNumber);

		previousNumber = currentNumber;
		currentNumber = nextNumber;

	}
	





	return 0;
}
