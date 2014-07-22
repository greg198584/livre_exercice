#include <stdio.h>
#include <stdlib.h>

int x, y, z;

int larger_of(int a, int b);

int main(){
	puts("Entrez deux valeurs entières differentes :");
	scanf("%d%d", &x, &y);

	z = larger_of(x,y);

	printf("\nLa valeur la plus grande est %d\n", z);
	exit(EXIT_SUCCESS);
}

int larger_of(int a, int b){
	int c;
	if (a > b)
		c = a;
	else
		c = b;
	return c;
}

