#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * compare_string(char *fist, char *second);

int main(){
	char *a = "coucou";
	char *b = "salut";
	char *longer;

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

