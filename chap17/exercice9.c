#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonction_perso.h"

#define MAX 1024

/* prototype fonction strstr_perso du fichier fonction_perso.h */
char *strstr_perso(char *str1, char *str2);
void get_lines(FILE *fp, char str_search[]);

/* variable */
char str_search[100];
char buffer[256];
char *lignes_fichier[MAX];

FILE *fp;

int main(){
	
	char *temp;
	char filename[40];
	int i;
	int x;

	printf("\nEntrer le nom du fichier a ouvrir  : ");
	fgets(filename, sizeof(filename), stdin);

		i=0;
		while(filename[i] && filename[i] != '\n') i++;
		filename[i] = '\0';
	
	printf("\nIndiquer le mot rechercher : ");
	fgets(str_search,sizeof(str_search), stdin);
		
		i=0;
		while(filename[i] && filename[i] != '\n') i++;
		filename[i] = '\0';

	if((fp = fopen(filename, "r")) == NULL )
	{
		fprintf(stderr, "Erreur lors de la lecture");
		exit(EXIT_FAILURE);
	}
	
	get_lines(fp, str_search);
	fclose(fp);
	exit(EXIT_SUCCESS);
	
	}


