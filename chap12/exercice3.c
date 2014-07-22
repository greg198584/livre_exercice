#include <stdio.h>
#include <stdlib.h>

void print_var(int x);

int main(){
	int a = 102;
	print_var(a);
	}

void print_var(int x){
	printf("var contient : %d\n", x);
	}
