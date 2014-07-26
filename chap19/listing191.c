/* exemple d'utilisation de quelque fonctions mathématiques */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	double x;
	printf("Taper un nombre : ");
	scanf("%lf", &x);

	printf("\n\nValeur originale : %lf", x);
	printf("\nCeil : %lf", ceil(x));
	printf("\nFloor : %lf", floor(x));
	if(x >=0)
		printf("\nRacine carrée.");
	else
		printf("\nNombre négatif.");

	printf("\nCosinus : %lf\n", cos(x));
	exit(EXIT_SUCCESS);
	}
