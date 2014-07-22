#include <stdio.h>
#include <stdlib.h>

int main(){
	int data[10];
	*(data + 2) = 100;

	printf("le troisieme element du tableau est : %d", data[2]);

	}
