#include <stdio.h>
#include <stdlib.h>

int calcul_tableau(void);
int tableau[10];

int main(){

	int resultat , count, nombre;
	
	puts("\n========================");
	puts("Entrer 10 valeur entiere");
	puts("========================");
	
	for(count=0;count<10;count++)
		{
			printf("\nEntrez la valeur numero %d : ", count+1);
			scanf("%d", &nombre);

			tableau[count] = nombre;
		}
	resultat = calcul_tableau();
	
	printf("\nle resultat est : %d\n", resultat);
	exit(EXIT_SUCCESS);
}

int calcul_tableau(void){
	
	int count, somme = 0;
	
	for(count=0;count<10;count++)
		{
			somme = somme + tableau[count];
		}
	return somme;
}
 
			 
