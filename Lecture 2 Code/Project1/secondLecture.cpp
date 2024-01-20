#include <stdio.h>



int main() {

	int i=0, j;


	// for (Döngünün baþlangýç noktasý, Döngünün bitiþ noktasý, Her bir turda yapýlacak iþlem) { Tekrarlanýr }

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