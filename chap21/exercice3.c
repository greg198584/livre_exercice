/* ce code est le meme que l'exercice6 , chap16 
 *
 * il recopier le contenu d'un fichier dans un autre.
 * la difference de ce code a l'autre est le fait de passer en argument
 * a la fonction main , le fichier source et destination .
 *
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

int i;
char *filename[];
char *new_filename[];
char buffer[MAX];
char buffer_MAJ[MAX];
FILE *fp;
FILE *fp_destination;


int main(int argc, char *argv[]){

	if(argc < 3){
		printf("\nUsage : %s <fichier source> <fichier destination> ", argv[0]);
		exit(EXIT_FAILURE);
		}
	
	*filename = argv[1];
	*new_filename = argv[2];

	if( (fp = fopen(*filename, "r")) == NULL)
		{
			fprintf(stderr, "Erreur lors de l'ouverture du fichier \n");
			exit(EXIT_FAILURE);
		}

	if((fp_destination = fopen(*new_filename, "w")) == NULL){
		fprintf(stderr, "Erreur lors de l'ouverture du fichier a ecrire \n");
			exit(EXIT_FAILURE);
		}

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
		{
					for(i=0;i<strlen(buffer);i++){
						buffer[i] = toupper(buffer[i]);
						}
					fprintf(fp_destination, "%s" ,buffer);
		}
	fclose(fp);
	fclose(fp_destination);

	exit(EXIT_SUCCESS);

	}


