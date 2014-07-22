#include <stdio.h>

int main(){
	
	int x;

	puts("\nEntrez une valeur paire :");
	scanf("%d", &x);
	
	while(x % 2 != 0){
	printf("\nVous n'avez pas entrez une valeur paire\n");
	}
	printf("\nVous avez entrer la valeur %d\n", x);
}



