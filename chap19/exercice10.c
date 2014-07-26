/* programme qui lit 30 taper par l'utilisateur et ensuite les tries avec la fonction qsort() */
/*
 * meme programme que exercice8 , sauf que le temp sera preciser pour connaitre le temp que le fonction qsort() a mis */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/times.h>

#define MAX 30

int comp(const void *s1 , const void *s2);

int main(){
	
	time_t start, finish;
	double duration;

	char *name_list[MAX];
	char buffer[80];
	int i, count;
	
	puts("\nEntrer 30 noms ensuite cela seront triés :");
	for(count=0; count<MAX; count++)
	{
		printf("Nom [%d] : ", count+1);
		fgets(buffer, sizeof(buffer), stdin);
			
			i=0;
			while(buffer[i] && buffer[i] != '\n')i++;
			buffer[i] = '\0';

		name_list[count] = strdup(buffer);
	}

	
	/* trie */
	start = time(0);
	qsort(name_list, MAX, sizeof(name_list[0]), comp);
	
	finish = time(0);
	duration = difftime(finish, start);

	puts("\nTRIE ET AFFICHAGE");

	for(count=0; count<MAX; count++)
	{
		printf("\nMOT [%d] : %s", count+1, name_list[count]);
	}

	printf("\nLe programme a mis %lf \n", duration);

		exit(EXIT_SUCCESS);
}

int comp(const void *s1 , const void *s2)
{
	return (strcmp(*(char **)s1, *(char **)s2));
}
