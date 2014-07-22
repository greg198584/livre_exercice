#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLINES 4

int get_lines(char *lines[]);
void sort(char *p[], int n);
void print_strings(char *p[], int n);

char *lines[MAXLINES];

int main(){
	
	int number_of_lines;
	number_of_lines = get_lines(lines);

	if(number_of_lines < 0)
	{
		puts("Erreur d'Allocation mémoire");
	exit(EXIT_FAILURE);
	}

	sort(lines, number_of_lines);
	print_strings(lines, number_of_lines);
	return 0;
}

int get_lines(char *lines[]){
	int n = 0;
	char buffer[80];

	puts("Tapez les phrases une par une");
	puts("Terminer par un simple appui sur entrée");

	while ((n < MAXLINES) && (fgets(buffer, sizeof(buffer), stdin) > 0)){
		int i=0;
		while(buffer[i] && buffer[i] != '\n') i++;
		buffer[i] = '\0';

		if(i == 0) break;

		if((lines[n] = malloc(strlen(buffer)+1)) ==  NULL)
			return -1;
		strcpy(lines[n++], buffer);
	}
	return n;
}

void sort(char *p[], int n){
	int a, b;
	char *x;

	for(a=1; a < n; a++)
		{
			if (strcmp(p[b], p[b+1])> 0)
				{
					x = p[b];
					p[b] = p[b+1];
					p[b+1] = x;
					}
			}
	}

void print_strings(char *p[], int n){
	int count;
	for(count=0; count < n;count++)
		printf("%s\n", p[count]);
	}


