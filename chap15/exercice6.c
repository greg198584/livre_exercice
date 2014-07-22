#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char tableau[12][12];

int main(){
	int i;
	int a;
	char lettre = 'X';

	for(i=0;i<12;i++)
		{
		for(a=0;a<12;a++)
			tableau[i][a] = lettre;
		}
	
		for(i=0;i<12;i++)	
		{
			for(a=0;a<12;a++)
				printf("%c", tableau[i][a]);
			printf("\n");
		}
	}
