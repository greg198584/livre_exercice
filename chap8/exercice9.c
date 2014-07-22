#include <stdio.h>
#include <stdlib.h>

int main(){
	int tableau[10];
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
	exit(EXIT_SUCCESS);
}
		
