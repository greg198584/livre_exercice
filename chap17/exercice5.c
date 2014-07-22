#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int i;

	char nom[40];
	char prenom[40];
	char deuxieme_prenom[40];
	char initial[20];

	printf("\nEntrez votre nom : ");
		fgets(nom, sizeof(nom), stdin);
	
		i=0;
		while(nom[i] && nom[i] != '\n')i++;
		nom[i] = '\0';

	printf("\nEntrez votre prénom maintenant : ");
		fgets(prenom, sizeof(prenom), stdin);

		i=0;
		while(prenom[i] && prenom[i] != '\n')i++;
		prenom[i] = '\0';

	printf("\nEntrez votre deuxieme prénom si vous avez un : ");
		fgets(deuxieme_prenom, sizeof(deuxieme_prenom), stdin);
		
		i=0;
		while(deuxieme_prenom[i] && deuxieme_prenom[i] != '\n')i++;
		deuxieme_prenom[i] = '\0';

	initial[0] = toupper(prenom[0]);
	initial[1] = '.';
	initial[2] = toupper(deuxieme_prenom[0]);
	initial[3] = '.';
	initial[4] = '\0';
	nom[0] = toupper(nom[0]);

	printf("\nVos initial sont : %s %s\n", initial, nom);

}
