#include <stdio.h>
#include <stdlib.h>

void copie_tableau(void);

int tableau1[10] = { 1,2,3,4,5,6,7,8,9,10};
int tableau2[10];

int main(){
	int i;

	printf("\nAFFICHAGE TABLEAU 1:");
	for(i=0;i<10;i++)
		printf("\n%d", tableau1[i]);
	printf("\nAPPEL DE LA FONCTION COPIE");
	copie_tableau();
	printf("\nAFFICHAGE TABLEAU 2:");
	for(i=0;i<10;i++)
		printf("\n%d", tableau2[i]);
		printf("\n");
	exit(EXIT_SUCCESS);
	}

void copie_tableau(void){
	int i;
	for(i=0;i<10;i++)
		tableau2[i] = tableau1[i];
	}
