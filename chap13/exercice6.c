#include <stdio.h>
#include <stdlib.h>

int main(){
	int nombre;

	while(1){
		printf("\nChoisissez entre 1 et 2 :\n");
		scanf("%d", &nombre);

		
		if(nombre == 1)
		{
			printf("\nVous avez taper 1\n");
			break;
		}
		else if (nombre == 2)
		{
			printf("\nVous avez taper 2\n");
			break;
		}
		else
			printf("Vous avez tapez ni un ni l'autre");
	}
	exit(EXIT_SUCCESS);
}

