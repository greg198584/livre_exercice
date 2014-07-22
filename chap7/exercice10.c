#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float x, y;
	puts("\nEntrez deux nombres a virgule :");
	
		scanf("%f %f", &x, &y);
	printf("le produit de %f et %f est : %f \n", x, y, x*y);
	exit(EXIT_SUCCESS);
}

