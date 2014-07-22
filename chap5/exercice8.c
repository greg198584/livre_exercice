#include <stdio.h>
#include <stdlib.h>

int division(int x, int y);

int main(){
	int a, b, c;
	printf("\nTaper deux valeurs entieres superieur a Zero\n");
	scanf("%d%d", &a, &b);

	c = division(a, b);
	
	if(c == 0)
			
		puts("\nOn peut pas diviser par zero EINSTEIN , LOL !!!\n");
	else
		printf("\n%d Divivser par %d est egale à : %d\n", a, b, c);
	exit(EXIT_SUCCESS);
}

int division(int x, int y){
	int reponse = 0;

	if ( y == 0)
		reponse = 0;
	else
		reponse = (x/y);
		return reponse;
	}
