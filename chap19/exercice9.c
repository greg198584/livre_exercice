/* programme qui lit 30 taper par l'utilisateur et ensuite les tries avec la fonction qsort() */
/* 
 * indentique a exercice8 , met lorsque l'utilisateur tape le mot 'quitte' le programme sort de la boucle et trie 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

int comp(const void *s1 , const void *s2);

int main(){
	
	char *name_list[MAX];
	char *str = "quitte";	
	char buffer[80];

	int i, count, valeur, nombre_mot=0;

	puts("\nEntrer 30 noms ensuite cela seront triés :");
	puts("taper \"quitte\" si vous voulez arreter l'enregistrement et commencer le trie");

for(count=0; count<MAX; count++)
	{
		printf("Nom [%d] : ", count+1);
		fgets(buffer, sizeof(buffer), stdin);
			
			i=0;
			while(buffer[i] && buffer[i] != '\n')i++;
			buffer[i] = '\0';
		
			valeur = strcmp(str, buffer );
			
			if(valeur == 0)
			break;

		name_list[count] = strdup(buffer);
		nombre_mot++;
	}


	/* trie */
	qsort(name_list, nombre_mot, sizeof(name_list[0]), comp);
	
	puts("\nTRIE ET AFFICHAGE");

	for(count=0; count<nombre_mot; count++)
	{
		printf("\nMOT [%d] : %s", count+1, name_list[count]);
	}

	printf("\n");

		exit(EXIT_SUCCESS);
}

int comp(const void *s1 , const void *s2)
{
	return (strcmp(*(char **)s1, *(char **)s2));
}
