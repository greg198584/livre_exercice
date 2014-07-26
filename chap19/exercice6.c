/* utiliser fonction assert en cas de saisi de nombre negatif */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

int main()
{
	double x;
	printf("Taper un nombre : ");
	scanf("%lf", &x);

	printf("\n\nSQRT : %lf\n", sqrt(x));
	
		assert(x >=0);
	
	exit(EXIT_SUCCESS);
	}
