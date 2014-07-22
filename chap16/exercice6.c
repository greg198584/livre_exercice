#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int i;
char filename[50];
char new_filename[] = "copy_files";
char buffer[MAX];
char buffer_MAJ[MAX];
FILE *fp;
FILE *fp_destination;


int main(){
	puts("\nEntrer le nom du fichier a recopier :");
	fgets(filename,sizeof(filename),stdin);
		i=0;
		while(filename[i] && filename[i] != '\n')i++;
			filename[i] = '\0';

	if( (fp = fopen(filename, "r")) == NULL)
		{
			fprintf(stderr, "Erreur lors de l'ouverture du fichier \n");
			exit(EXIT_FAILURE);
		}

	if((fp_destination = fopen(new_filename, "w")) == NULL){
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


