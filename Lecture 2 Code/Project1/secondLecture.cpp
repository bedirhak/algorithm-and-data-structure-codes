#include <stdio.h>



int main() {

	int i=0, j;


	// for (D�ng�n�n ba�lang�� noktas�, D�ng�n�n biti� noktas�, Her bir turda yap�lacak i�lem) { Tekrarlan�r }

	for (i = 0; i<100; i++ ) {

		if (i >= 28) {
			break;
		}else if (i % 2 == 0) {
			continue;
		}

		
		printf("%d\n", i);

		
	}

	printf("burada %d", i);





	return 0;
}