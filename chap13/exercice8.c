/* ce programme permet d'effectuer des opérations de base */

#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
	float a=0;
	float b=0;
	char reponse;
	if(argc < 4){
		printf("\nUsage <%s> nombre opérande nombre\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	reponse = *argv[2];

	switch(reponse)
	{
		case '+':
		{
		printf("\n%f + %f = %f\n", a, b, a+b );
		break;
		}
		case '-':
		{
		printf("\n%f - %f = %f\n", a, b, a-b);
		break;
		}
		case 'x':
		{
		printf("\n%f * %f = %f\n", a, b, a*b);
		break;
		}
		case '/':
		{
		printf("\n%f / %f = %f\n", a, b, a/b);
		break;
		}
		default:
		{
			printf("\nCe que vous avez ecrit n'est pas correct,  utiliser les opérandes | + | - | x | / |\n");
		}
	}

exit(EXIT_SUCCESS);
}

