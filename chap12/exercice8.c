#include <stdio.h>
#include <stdlib.h>

void print_letter2(void);

char letter1 = 'X';
char letter2 = '=';

int main(){
	int ctr;
	for(ctr=0;ctr < 10;ctr++)
	{
		printf("%c", letter1);
		print_letter2();
	}
	printf("\n");
	exit(EXIT_SUCCESS);
	}

void print_letter2(void){
	int ctr;
	for (ctr=0;ctr<2;ctr++)
		printf("%c", letter2);
	}

