/* ce programme contient des ordres de controle */
#include <stdio.h>
#include <stdlib.h>
#define QUIT 3

int choix_menu(void);
void affiche(void);

int main(){

	int choix =0;
	
	while(choix != QUIT)
	{
		choix = choix_menu();
	
		if(choix == 1)
			printf("\nL'ordinateur va biper\a\a\a");
		else
		{
			if(choix == 2)
				affiche();
		}
	}
	printf("\nVous avez choisir de sortir !!! , Au revoir !\n");
	exit(EXIT_FAILURE);
}

int choix_menu(void){
	int selection = 0;
	
	do
	{
		printf("\n");
		printf("\n1 - Bip ordinateur");
		printf("\n2 - Affichage");
		printf("\n3 - sortir");
		printf("\n");
		printf("\nEntrez votre choix :\n");
		
		scanf("%d", &selection);
		}while (selection < 1 || selection > 3);
		
		return selection;
}

void affiche(void){
	printf("\nExemple d'affichage");
	printf("\n\nOrdre\tSignification");
	printf("\n======\t===============");
	printf("\n\\a\t\tsonnerie ");
	printf("\n\\b\t\tretour arriere");
	printf("\n...\t\t...");
	printf("\n\\\t\tAntislash");
	printf("\n\?\t\tpoint d'interrogation");
	printf("\n\"\"\t\tguillemets");
	printf("\n\'\'\t\tcrochets");
}

