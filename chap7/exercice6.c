#include <stdio.h>
#include <stdlib.h>

void affiche_tableau(void);

int tableau[6];

int main(){
	
	int x;	
	for(x=0;x<6;x++){
		puts("\nEntrez 6 valeurs paires");
		printf("\nValeur numero [%d]\n", x+1);
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

		affiche_tableau();
		exit(EXIT_SUCCESS);		
	}

void affiche_tableau(void){

	int x;
	for(x=0; x<6; x++)
		printf("\nVous avez entrer pour la valeur [%d] :\t %d\n", x+1, tableau[x]);
	}

	
