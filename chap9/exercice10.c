/* exercice 9 .incrire les éléments des tableau dans un troisieme */
#include <stdio.h>
#include <stdlib.h>

#define MAX 5

/* prototype de fontion */
int somtabs(int tab1, int tab2);
int addtabs(void);

/* variables*/
int x, somme, somme2, tab1, tab2;
int tableau1[MAX] = {2,2,2,2,2};
int tableau2[MAX] = {1,1,1,1,1};
int tableau3[MAX];

int main(){
		
	tab1 = 0;
	tab2 = 0;
	
	
	for(x=0;x<MAX;x++){
		tab1 += tableau1[x];
		tab2 += tableau2[x];
		}
	somme = somtabs(tab1, tab2);
	 puts("\n====================================");
	   puts("====================================");
	printf("\nLa somme de tableau 1 est de : %d", tab1);
	printf("\nLa somme de tableau 2 est de : %d", tab2);
	printf("\nLa somme des deux est %d", somme);
	 puts("\n====================================");
	  puts("====================================");
	  
	puts("\nON APPELLE LA FONCTION ADDTABS");
	
	/* appelle la fonction addtabs */
	int ptr_tab = addtabs();
	
	printf("\nLa fonction additionne les 2 premiers tableau");
	printf("\n--->>> inscrit leur resultat dans un troisieme");
	printf("\n--->>> calcul leur somme et l'inscrit dans le tableau 3");
	printf("\n\n\n############################################################");
	printf("\nLa fonction renvoi un pointeur sur le tableau 3 qui contient : %d", ptr_tab);
	for(x=0;x<MAX;x++){
		printf("\nTABLEAU[%d] = %d",x, tableau3[x]);
		}
	printf("\n");
	exit(EXIT_SUCCESS);
}

int somtabs(int tab1, int tab2){
	int resultat;
	resultat = tab1 + tab2;
	return resultat;
	}

int addtabs(void){
	int resultat = 0;
	int x;
	int *ptr = &tableau3[2];
	for(x=0; x<MAX;x++){
		resultat += tableau1[x];
		}
	tableau3[0] = resultat;
	resultat = 0;
	
	for(x=0; x<MAX;x++){
		resultat += tableau2[x];
		}
	tableau3[1] = resultat;
	
	resultat = 0;
	for(x=0;x<MAX;x++){
		resultat += tableau3[x];
		}
	tableau3[2] = resultat;
	resultat = 0;
return *ptr;
}
