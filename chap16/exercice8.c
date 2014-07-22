#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void create_tmpfiles(void);
void rec_temp_files(char *, char*);
void open_files(char * ,char *);

/* buffer pour le fichier temporaire */
char *buffer_tmp;
/*FICHIER A OUVRIR */
FILE *fp;
/* FICHIER TEMPORAIRE */
FILE *tmp_files;

int main(){
	int i;
	char filename[40];
	char buffer_source[MAX]; /* buffer du fichier qui sera ouvert */
	char buffer_tmpfiles[MAX];
	
	puts("Quel fichier voulait vous ouvrir : ");
	fgets(filename,sizeof(filename),stdin);
	
	i=0;
	while(filename[i] && filename[i] != '\n')i++;
		filename[i] = '\0';
	
	/*ouverture du fichier */
	open_files(buffer_source, filename);
		printf("\n**********************************");
		printf("\n|\n--> le fichier source contient : \n");
		printf("%s", buffer_source); /* lecture du fichier */
	
	create_tmpfiles();
		printf("\n***********************************");
		printf("\n|");
		printf("\n-->le fichier temporaire s'apelle : %s", buffer_tmp);

	rec_temp_files(buffer_source, buffer_tmpfiles);
		printf("\n***********************************");
		printf("\n|");
		printf("\n-->le fichier temporaire : %s", buffer_tmp);
		printf("\n|");
		printf("\n--> contient : ");
		printf("\n%s", buffer_tmpfiles);
		printf("\n***********************************\n\n");
		
		if(remove(buffer_tmp) == 0)
			printf("\nLe fichier %s a été supprimé ", buffer_tmp);
		else
			fprintf(stderr, "Erreur lors de la suppression du fichier %s", buffer_tmp);

	fclose(fp);
	fclose(tmp_files);
	free(buffer_tmp);
	
	exit(EXIT_SUCCESS);
}

/* enregistrer dans le fichier temporaire */
void rec_temp_files(char *buffer_source, char *buffer_tmpfiles){
	/* ouverture du fichier temporaire */

	if((tmp_files = fopen(buffer_tmp, "wb")) == NULL){
		fprintf(stderr, "Erreur lors de l'ouverture du fichier temporaire en mode ecriture");
		exit(EXIT_FAILURE);
		}
	/* on inscrit le buffer source dans le fichier temporaire */
	fwrite(buffer_source,sizeof(buffer_source),MAX,tmp_files);
	fclose(tmp_files);

	if((tmp_files = fopen(buffer_tmp, "rb")) == NULL){
		fprintf(stderr,"Erreur lors de l'ouverture du fichier temporaire en mode lecture");
		exit(EXIT_FAILURE);
		}

	/* lecture du fichier et enregistrement dans son buffer */
	fread(buffer_tmpfiles,sizeof(buffer_tmpfiles),MAX,tmp_files);

}

/* fonction d'ouverture du fichier */
void open_files(char *buffer_source_ptr, char *filename_source){
	
	if((fp = fopen(filename_source, "r")) == NULL){
		fprintf(stderr, "Erreur lors de l'ouverture du fichier source");
		exit(EXIT_FAILURE);
		}
	fread(buffer_source_ptr,sizeof(*buffer_source_ptr),MAX,fp);
}

/* créer le fichier temporaire */
void create_tmpfiles(void){
	
	int fd;
	FILE *tmp_files;
	
	
		/* GARNIR LE BUFFER avec un nom de fichier temporaire */
		buffer_tmp = strdup("fichier_XXXXXX");

		/* creer le fichier temporaire */
		if((fd = mkstemp(buffer_tmp)) == -1)
		{
			fprintf(stderr, "Impossible de créer le fichier ");
			exit(EXIT_FAILURE);
		}
	
}

