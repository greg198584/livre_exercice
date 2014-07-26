/* utilisation de qsort() et de bsearch() sur des chaines de caractères */

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

#define MAX 10

int comp(const void *s1, const void *s2);

int main()
{
	char *data[MAX], buf[80], *ptr, *key, **key1;
	int count, i;

	/* entrée une suite de mots */
	printf("Tapez %d mots séparés par un Appui Entrée.\n", MAX);
	for(count=0; count<MAX; count++)
	{
		printf("Mot %d : ", count+1);
		fgets(buf,sizeof(buf), stdin);
		i=0;
		while(buf[i] && buf[i] != '\n')i++;
		buf[i] = '\0';

		data[count] = strdup(buf);
	}

	/* trier les mots */

	qsort(data, MAX, sizeof(data[0]), comp);

	/* afficher les mots triés.*/

	for(count=0; count<MAX; count++)
		printf("\n%d: %s", count+1, data[count]);

	/* demander une clé de recherche */

	printf("\n\nTapez une clé de recherche : ");
	fgets(buf, sizeof(buf), stdin);
	i=0;
	while(buf[i] && buf[i] != '\n')i++;
	buf[i] = '\0';

	/* effectuer la recherche. commencer par définir key1 comme pointeur vers
	 * le pointeur sur la clé de recherche */

	key = buf;
	key1 = &key;
	ptr = bsearch(key1, data, MAX, sizeof(data[0]), comp);

	if (ptr != NULL)
		printf("%s trouvé.\n", buf);
	else
		printf("%s non trouvé.\n, buf");
	exit(EXIT_SUCCESS);
}

int comp(const void *s1 , const void *s2)
{
	return(strcmp(*(char **)s1, *(char **)s2));
}
