#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void dump();

#define MAX 4096
int i, length;
char filename[50];
char buffer[MAX];
FILE *fp;

int main(){
	
	puts("Entrez un nom de fichier : ");
	fgets(filename,sizeof(filename),stdin);
	
		i=0;
		while(filename[i] && filename[i] != '\n')i++;
		filename[i] = '\0';
	
	if((fp = fopen(filename, "r")) == NULL)
		{
			fprintf(stderr , "Erreur lors de l'ouverture du fichier ");
				exit(EXIT_SUCCESS);
		}
		while( fgets(buffer, sizeof(buffer),fp) != NULL)
		{
			dump();
		}
		exit(EXIT_SUCCESS);
		fclose(fp);
}


/* Affiche les octets en memoire au hexadecimal et en caractere ASCII */
void dump(void) {
	
	unsigned char byte;
	unsigned int i, j;

	for(i=0; i < strlen(buffer); i++) {
		byte = buffer[i];
		printf("%02x ", buffer[i]);  /* affiche un octet en hexa */
		if(((i%16)==15) || (i==strlen(buffer)-1)) {
			for(j=0; j < 15-(i%16); j++)
				printf("   ");
			printf("| ");
			for(j=(i-(i%16)); j <= i; j++) {  /* afficher les octets ASCII de la ligne */
				byte = buffer[j];
				if((byte > 31) && (byte < 127)) /* caractère ASCII */
					printf("%c", byte);
				else
					printf(".");
			}
			printf("\n"); /* fin de l'affiche d'une ligne ( 16 octets ) */
		} /* fin de if */
	} /* fin de for */
}
