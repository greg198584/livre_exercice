#include <stdio.h>
#include <stdlib.h>

int main(){
	char buffer[30];
	int n;
	fgets(buffer, sizeof(buffer), stdin);
	printf("\nLe buffer contient : \n");
	printf("\n%s%n", buffer, &n);
	printf("\nEt contient %d caractères\n", n);
	}

