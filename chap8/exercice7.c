#include <stdio.h>
#include <stdlib.h>

int main(){
	int tableau[5][4];
	int x, y;

	for(x=0;x<5;x++)
		{
		for(y=0;y<4;y++)
			{
				tableau[x][y] = rand();
			}
		}
	
	puts("\nAffichage des éléments du tableau :");
	
	for(x=0;x<5;x++)
		{
		for(y=0;y<4;y++)
			{
				printf("\nTableau[%d][%d] contient : %d\n", x, y, tableau[x][y]);
			}
		}
	exit(EXIT_SUCCESS);
}

