#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void compte_occurence(char *str1, char *str2);

int main(){
	int i;
	char chaine[MAX];
	char chaine_2[MAX];

	printf("\nEntrez premier votre phrase : ");
	fgets(chaine, sizeof(chaine), stdin);

		i=0;
		while(chaine[i] && chaine[i] != '\n')i++;
		chaine[i] = '\0';
	
	printf("\nEntrer un mot : ");
	fgets(chaine_2, sizeof(chaine_2), stdin);

		i=0;
		while(chaine_2[i] && chaine_2[i] != '\n')i++;
		chaine_2[i] = '\0';
	
		compte_occurence(chaine, chaine_2);
		exit(EXIT_SUCCESS);
		}

void compte_occurence(char *str1, char *str2){

	int x;
	int i=0;
	int j=0;
	int count = 0;
	int nombreCaractere = strlen(str2);

	for(i=0;i<nombreCaractere;i++)
	{
		
		while(str1[j] != '\0')
		
		{
			if(str2[i] == str1[j])
			{
				count++;
				j++;
			}
		j++;
		}

	printf("\nPour le caractère : %c , il y a %d occurrences dans la chaine \n", str2[i] , count);
	count = 0;
	j=0;
	}
}

