#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * compare_string(char *fist, char *second);

int main(){
	char *a;
	char *b;
	char *longer;
	
	a = malloc(35*sizeof(*a));
	b = malloc(35*sizeof(*a));	
	printf("\nEntrer la premier chaine :");
		fgets(a, sizeof(a), stdin);
	printf("\nEntrer la deuxieme chaine :");
		fgets(b, sizeof(b), stdin);
	
	longer = compare_string(a, b);
	printf("La chaine la plus longue est : %s\n", longer);
	
	}

char * compare_string(char *first, char *second){
	int x, y;

	x = strlen(first);
	y = strlen(second);

	if(x > y)
		return(first);
	else
		return(second);
	}

