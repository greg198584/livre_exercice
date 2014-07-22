#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 500

int main(){
	
	FILE *fp;
	int i, k;
	char buf[BUFSIZE];
	char filename[60];

	puts("Indiquer le fichier à afficher : ");
	fgets(filename,sizeof(filename),stdin);
	i=0;
	while(filename[i] && filename[i] != '\n')i++;
	filename[i]  = '\0';

	/*ouverture du fichier en lecture seul */
	if((fp = fopen(filename, "r")) == NULL)
		{
			fprintf(stderr, "Erreur lors de l'ouverture du fichier ");
			exit(EXIT_FAILURE);
		}

	while (fgets(buf, sizeof(buf), fp) != NULL)
	{
		printf("%s",buf);
	}
	fclose(fp);
	exit(EXIT_SUCCESS);
}

