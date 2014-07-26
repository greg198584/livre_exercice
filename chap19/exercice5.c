/* fonction qui arrete le programme par un temp defini par l'utilisateur en seconde 
 * en utilisant les fonctions vue dans le chapitre */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/times.h>

void pause_time(time_t x);

int main()
{
	double time;
	printf("\nCombien de temp voulait vous arreter le programmes en seconde \? : ");
	scanf("%lf", &time);

	/* appel de la fonction */
	pause_time(time);

	printf("\n\nLe programmes se relance apres %lf secondes \n", time);

	exit(EXIT_SUCCESS);
}

void pause_time(time_t x)
{
	time_t start, finish;
	double duration;

	start = time(0);
	
	while(duration != x)
		{
			finish = time(0);
			duration = difftime(finish,start);
		}
}

