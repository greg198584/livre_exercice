/* même chose que l'exercice 5 met avec la fonction standard sleep() */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
	int time;
	printf("\nCombien de temp voulait vous arreter le programmes en seconde \? : ");
	scanf("%d", &time);
	puts("\nVeuillez Patienter ...");

	sleep(time);
	printf("\n\nLe programmes se relance apres %d secondes \n", time);

	exit(EXIT_SUCCESS);
}

