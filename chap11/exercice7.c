#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char adresse1[30];
	char adresse2[30];
	char ville[30];
	char etat[20];
	char zip[10];
	}RECORD;

RECORD monadresse = { "rue quiestla", "et puis ici", "SUPERVILLE", "FRANCE", "45678" };

int main(){
	printf("\nVotre adresse :\n%s\n%s\n%s\n%s\n%s\n", monadresse.adresse1, monadresse.adresse2, monadresse.ville, monadresse.etat, monadresse.zip);
	}
