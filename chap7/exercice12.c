#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main()
{
	int tableau[MAX];
	int count = 0, temp, nombre_saisi, maximun, minimun;

	puts("\nVous devez rentrer maximun 99 valeur. celle ci seront comparer");
	puts("-->> ensuite la plus grande et plus petit valeur seront afficher");
	puts("-->> si vous taper 0 cela stoppera l'enregistrement");
	
	do
	{
		puts("rentrer une valeur ou 0 pour arreter le processus : ");
		scanf("%d", &temp);
		tableau[count++] = temp;
	}while(count <= MAX && temp !=0);

	nombre_saisi = count;

	/* comparaison */

	maximun = -32000;
	minimun =  32000;

	for(count=0;count<=nombre_saisi && tableau[count] !=0;count++)
		{
			if(tableau[count] > maximun)
				maximun = tableau[count];
			if(tableau[count] < minimun)
				minimun = tableau[count];
		}

		printf("\n-->> La valeur la plus grande est %d\n-->> La valeur la plus petite est %d\n\n", maximun, minimun);
		exit(EXIT_SUCCESS);
}

		
