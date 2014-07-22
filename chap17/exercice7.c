#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char *strstr_perso(char *str1, char *str2);

int main(){
	int i;
	int nombreCaractere = 0;
	char *loc;
	char chaine[MAX];
	char chaine_2[MAX];

	printf("\nEntrez premier votre phrase : ");
	fgets(chaine, sizeof(chaine), stdin);

		i=0;
		while(chaine[i] && chaine[i] != '\n')i++;
		chaine[i] = '\0';
	
	printf("\nQuel mot chercher vous dans la chaine ? : ");
	fgets(chaine_2, sizeof(chaine_2), stdin);

		i=0;
		while(chaine_2[i] && chaine_2[i] != '\n')i++;
		chaine_2[i] = '\0';
	
	nombreCaractere = strlen(chaine_2);

	loc = strstr_perso(chaine, chaine_2);

	if (loc == NULL){
		printf("\nPas de correspondance \n");
		exit(EXIT_FAILURE);
	}
		printf("\nDans la chaine : [ %s ]  \n", chaine);
		printf("\nla correspondance a été trouver pour : ");
	
			for(i=0; i<nombreCaractere;i++)
				printf("%c", loc[i]);
		
			printf("\n");
		exit(EXIT_SUCCESS);
		}

char *strstr_perso(char *str1, char *str2){

int i=0;
int j;
int nombreCaractere = 0;
int indicateurPointeur = 0;
int count=0;

char *pointeur = NULL;

nombreCaractere = strlen(str2);

printf("\n Le nombre de caractère est : %d", nombreCaractere);

	while(str1[i] != '\0' && pointeur == NULL)
	{
		while(str1[i] != str2[0])
		{
			i++;
		}
		indicateurPointeur = i;
		printf("\nl'indicateur Pointeur est a : %d ", indicateurPointeur);

		if(str1[i] == str2[0])
		{
			j = 0;
			while(str1[i] == str2[j] && str2[j] != '\0')
			{

				printf("\nstr1[%d] -- str2[%d]", i, j);
				i++;
				j++;
				count++;
			}
			printf("\ncount contient : %d caractère", count);
			if(count == nombreCaractere)
			{
				pointeur = str1+indicateurPointeur;
			}
		}

		i = indicateurPointeur;
		count = 0;
		i++;
		printf("\nsortant de la seconde boucle while indicateurPointeur a initialiser i à : %d\n", i);
	}
return pointeur;
}

