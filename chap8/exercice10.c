#include <stdio.h>
#include <stdlib.h>

int main(){
	int tableau[10], tableau2[10];
	int x,y;

	for(x=0;x<10;x++)
		{
			y = x;
			tableau[x] = y;
		}
	
	puts("Affichage des éléments du tableau");
		
	for(x=0;x<10;x++)
		{
			printf("\nTableau[%d] contient --->>> %d",x , tableau[x]);
		}
	printf("\n");

	puts("\nCOPIE DU TABLEAU 1 DANS TABLEAU 2 EN AJOUTANT 10 A LA VALEUR DES ELEMENTS");
	for(x=0;x<10;x++)
		tableau2[x] = tableau[x] + 10;

	puts("\n\nAFFICHAGE TABLEAU 2 :");
	for(x=0;x<10;x++)
		printf("\nTABLEAU 2[%d] contient --->>> %d", x, tableau2[x]);
		printf("\n");
	exit(EXIT_SUCCESS);
}
		
