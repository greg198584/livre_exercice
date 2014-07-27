#include <stdio.h>
#include <stdlib.h>

#define MAX 2

int main(){
	int nombre, resultat_et, resultat_ou_inclusif, resultat_ou_exclusif;
	int resultat_et_2, resultat_ou_inclusif_2, resultat_ou_exclusif_2;

	for(nombre=0; nombre<MAX; nombre++)
	{
		resultat_et = nombre & nombre;
		resultat_ou_inclusif = nombre | nombre;
		resultat_ou_exclusif = nombre ^ nombre;

		printf("\n\n[ OPÉRATEUR BIT A BIT ]");
		printf("\n[ ET ] : %d & %d  = %d", nombre, nombre, resultat_et );
		printf("\n[ OU inclusif] : %d | %d  = %d", nombre, nombre, resultat_ou_inclusif );
		printf("\n[ OU exclusif ] : %d ^ %d  = %d", nombre, nombre, resultat_ou_exclusif );

		resultat_et_2 = resultat_et & resultat_et;
		resultat_ou_inclusif_2 = resultat_ou_inclusif | resultat_ou_inclusif;
		resultat_ou_exclusif_2 = resultat_ou_exclusif ^ resultat_ou_exclusif;
		
		printf("\n\n[ AVEC LE RESULTAT ]");
		printf("\n\n[ ET ] : %d & %d  = %d", resultat_et, resultat_et, resultat_et_2 );
		printf("\n[ OU inclusif] : %d | %d  = %d", nombre, nombre, resultat_ou_inclusif_2);
		printf("\n[ OU exclusif ] : %d ^ %d  = %d", nombre, nombre, resultat_ou_exclusif_2 );

	}
	printf("\n");
	exit(EXIT_SUCCESS);
}
