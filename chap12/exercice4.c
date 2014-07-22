#include <stdio.h>
#include <stdlib.h>

int var = 500;
void print_var(void);

int main(){
	extern int  var;
	printf("[main] : %d\n", var);
	print_var();
	}

void print_var(void){
	printf("[print_var] : %d\n",var);
	}
