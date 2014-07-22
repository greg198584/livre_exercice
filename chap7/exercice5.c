#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x;
	int tableau[6];
	
	for(x=0;x<6;x++){
		puts("\nEntrez 6 valeurs paires");
		printf("\nValeur numero [%d]\n", x);
		scanf("%d",&tableau[x]);
		if(tableau[x] == 99){
			printf("\nVous avez entrer %d , le programme s'arrete \n", tableau[x]);
			exit(EXIT_SUCCESS);
			}
 	
		while(tableau[x] %2 != 0){
			printf("\nOn a dit de rentrer des valeurs paires , recommencer :\n");
			scanf("%d", &tableau[x]);
			}		
		}

		for(x=0;x<6;x++)
			printf("\nVous avez rentrer pour la valeur numero [%d] : %d\n", x, tableau[x]);
		
		exit(EXIT_SUCCESS);		
	}

		
	
