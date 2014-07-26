/* programme qui lit 30 taper par l'utilisateur et ensuite les tries avec la fonction qsort() */
/*
 * meme programme que exercice10 , sauf que le temp sera preciser pour connaitre le temp que le fonction "perso de trie" a mis 
 * compararer a qsort() */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <sys/times.h>

#define MAX 30

void sort_name(char *p[]);

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

	sort_name(name_list);
	
	finish = time(0);
	duration = difftime(finish, duration);

	puts("\nTRIE ET AFFICHAGE");

	for(count=0; count<MAX; count++)
	{
		printf("\nMOT [%d] : %s", count+1, name_list[count]);
	}

	
	printf("\nLe fonction sort_name a mis : %lf ", duration);
		exit(EXIT_SUCCESS);
}

void sort_name(char *p[])
{
	int a, b;
	char *x;

	for(a=1; a<MAX; a++)
		for(b=0; b<MAX-1; b++)
		{
			if (strcmp(p[b], p[b+1]) >0)
			{
				x = p[b];
				p[b] = p[b+1];
				p[b+1] = x;
			}
		}
}
