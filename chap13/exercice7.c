#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	do
	{
		printf("\nTAPER zero pour arreter : \n");
		scanf("%d", &i);
		if(i == 0){
			break;
		}
	} while(1);
}

