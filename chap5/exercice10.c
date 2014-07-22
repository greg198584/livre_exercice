#include <stdio.h>
#include <stdlib.h>

float moyenne(float a, float b,float  c ,float d,float  e);

int main(){

	float a, b, c, d, e;
	float resultat;
	printf("\nRentrez vos 5 notes :\n");
	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
	
	resultat = moyenne(a, b, c, d ,e);

	printf("la moyenne est de %f sur 20\n", resultat);
	exit(EXIT_SUCCESS);

	}


float moyenne(float a, float b,float  c ,float d,float  e){
	return((a+b+c+d+e)/5);
	}

