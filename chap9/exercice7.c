/* exerice7 et 8 */


#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int somtabs(int tab1, int tab2);

int main(){
	int x, somme, tab1, tab2;
	int tableau1[MAX] = {2,2,2,2,2};
	int tableau2[MAX] = {1,1,1,1,1};
	
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
	  
	exit(EXIT_SUCCESS);
}

int somtabs(int tab1, int tab2){
	int resultat;
	resultat = tab1 + tab2;
	return resultat;
	}

