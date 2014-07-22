#include <stdio.h>
#include <stdlib.h>

int var = 99;
void affiche_var(void);

int main(){
	affiche_var();
	}

void affiche_var(void){
	printf("var contient : %d\n",var);
	}
