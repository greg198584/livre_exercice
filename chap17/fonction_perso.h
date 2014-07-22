/* fonction qui cherche une chaine dans une autre 
 * usage : strstr_perso(str1, str2)
 *
 * str1 : chaine principal
 * str2 : chaine a chercher
 *
 * les lignes de code en commentaire servent pour debogage */

char *strstr_perso(char *str1, char *str2){

int i=0;
int j;
int nombreCaractere = 0;
int indicateurPointeur = 0;
int count=0;

char *pointeur = NULL;

nombreCaractere = strlen(str2)-1;

/*printf("\n Le nombre de caractère est : %d", nombreCaractere);*/

	while(str1[i] != '\0' && pointeur == NULL)
	{
		while(str1[i] != str2[0])
		{
			i++;
		}
		indicateurPointeur = i;
		/*printf("\nl'indicateur Pointeur est a : %d ", indicateurPointeur);*/

		if(str1[i] == str2[0])
		{
			j = 0;
			while(str1[i] == str2[j] && str2[j] != '\0')
			{

				/*printf("\nstr1[%d] -- str2[%d]", i, j);*/
				i++;
				j++;
				count++;
			}
			/*printf("\ncount contient : %d caractère", count);*/
			if(count == nombreCaractere)
			{
				pointeur = str1+indicateurPointeur;
			}
		}

		i = indicateurPointeur;
		count = 0;
		i++;
		/*printf("\nsortant de la seconde boucle while indicateurPointeur a initialiser i à : %d\n", i);*/
	}
return pointeur;
}

/* rangement de fichier par ligne avec numerotation 
 * recherche de chaine dans les lignes du fichier */

void get_lines(FILE *fp, char str_search[]){
	
	int i=1;
	char buffer[256];
	char *resultat;

	while(fgets(buffer, sizeof(buffer), fp) != NULL)
		{
			resultat = strstr_perso(buffer, str_search);
			if(resultat != NULL){
				printf("\nTrouver pour  :  ligne [%d] pour le mot : %s", i, str_search);
				printf("\nExtrait pour  :  ligne [%d] %s", i, buffer);
				}
			i++;
		}
}
