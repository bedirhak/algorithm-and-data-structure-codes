#include <stdio.h>
#include <string.h>

// Structure giriþ

struct Student {

	char name[20];
	char surname[20];
	int studentNumber;

}bedirhan,aycan, berat;

struct Address {
	char ilce[25];
	char mahalle[250];
	char sokak[25];
};

struct StudentVersion {

	char name[20];
	char surname[20];
	int studentNumber;
	struct Address adres;
};

struct Car {
	int tekerSayisi;
	int kapiSayisi;
	float motor;
	char brand[25];
}myFirstCar;

void showCarFeatures(struct Car a) {
		
	printf("Teker sayisi: %d, Kapi Sayisi: %d, Motor: %.2f, Marka: %s", a.tekerSayisi, a.kapiSayisi, a.motor, a.brand);

}

void showCar(struct Car *c) {

	printf("%d %d %.3f %s", c->tekerSayisi, c->kapiSayisi, c->motor, c->brand);
}



int main() {
	
	// struct structType objeName = {values}

	 
	//myFirstCar = { 4,2,2.0,"Mercedes" };

	//showCarFeatures(myFirstCar); // Structurelarýn fonksiyona yollanmasý


	berat = { "berat","kara",2154 };

	bedirhan = { "bedirhan", "kara", 21702828 };

	//printf("Name: %s\nSurname: %s\n Student Number: %d\n", bedirhan.name, bedirhan.surname, bedirhan.studentNumber);

	struct Student Aycan;
	Aycan.studentNumber = 1;
	strcpy_s(Aycan.name, sizeof(Aycan.name), "Aycannnnn");
	strcpy_s(Aycan.surname, sizeof(Aycan.surname), "Gelen");

	//printf("Name: %s\nSurname: %s\n Student Number: %d \n", Aycan.name, Aycan.surname, Aycan.studentNumber);


	aycan.studentNumber = 21702121;
	
	//strcpy(aycan.name, "Aycan");

	//Bir structureda string deðer deðiþtirilmek istenirse.
	strcpy_s(aycan.name, sizeof(aycan.name), "Aycan");
	strcpy_s(aycan.surname, sizeof(aycan.surname), "Gelen");

	//printf("Name: %s\nSurname: %s\n Student Number: %d", aycan.name, aycan.surname, aycan.studentNumber);

	struct StudentVersion newStudent = {
		"bedirhan",
		"kara",
		21702828
	};

	strcpy_s(newStudent.adres.ilce, sizeof(newStudent.adres.ilce), "Serdivan");
	strcpy_s(newStudent.adres.mahalle, sizeof(newStudent.adres.mahalle), "Manolya mah.");
	strcpy_s(newStudent.adres.sokak, sizeof(newStudent.adres.sokak), "2015 sok.");


	//printf("Name: %s Surname: %s Number: %d Adress: %s  %s  %s", newStudent.name, newStudent.surname, newStudent.studentNumber, newStudent.adres.ilce, newStudent.adres.mahalle, newStudent.adres.sokak);

	// structure arrayleri ve kullanýcýdan veri alma

	struct Student myStudents[3];

	int i;

	// Normali bu kullaným olarak bunu kullanýyoruz.
	/*for (i = 0; i < 3; i++) {

		printf("%d. ogrencinin verilerini giriniz: ", i + 1);
		scanf_s("%s %s %d", &myStudents[i].name, &myStudents[i].surname, &myStudents[i].studentNumber);

	}*/

	/*for (i = 0; i < 3; i++) {
		printf("%d. ogrencinin verilerini giriniz: ", i + 1);
		scanf_s("%s %s %d", &myStudents[i].name, sizeof(myStudents[i].name), &myStudents[i].surname, sizeof(myStudents[i].surname), &myStudents[i].studentNumber, sizeof(myStudents[i].studentNumber));
	}

	for (i = 0; i < 3; i++) {
		printf("%d. ogrencinin verileri:\nName: %s\nSurname: %s\nStudent Number: %d", i + 1, myStudents[i].name, myStudents[i].surname, myStudents[i].studentNumber);
	}*/


	// structurelarýn pointerlarý

	int a = 5;

	int *p;
	
	p = &a;

	

	struct Car myLastCar = { 4,5,1.6,"Volvo" };

	struct Car *pointTo;

	pointTo = &myLastCar;
	
	//printf("%d %d %.2f %s\n", myLastCar.tekerSayisi, myLastCar.kapiSayisi, myLastCar.motor, myLastCar.brand);

	//printf("%d %d %.2f %s\n", (*pointTo).tekerSayisi, (*pointTo).kapiSayisi, (*pointTo).motor, (*pointTo).brand);

	//printf("%d %d %.2f %s\n", pointTo->tekerSayisi, (*pointTo).kapiSayisi, pointTo->motor, (*pointTo).brand);

	showCar(&myLastCar);

	/*
	struct Car {
	int tekerSayisi;
	int kapiSayisi;
	float motor;
	char brand[25];
}myFirstCar;
*/
































	return 0;
}