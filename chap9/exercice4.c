#include <stdio.h>

int main(){
	int cout;
	int *ptr;
	
	cout = 100;
	ptr = &cout;

	printf("\ncount est a l'adresse %d et contient %d", &cout, cout);
	printf("\nptr est a l'adresse %p est contient %d\n\n", &ptr, ptr);
	printf("\nptr contient la l'adresse de cout , sa valeur est %d\n\n", *ptr);
	}

