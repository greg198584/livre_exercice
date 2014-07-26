/* utilisation de qsort() et bsearch() avec des valeurs */

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int intcmp(const void *v1, const void *v2);

int main()
{
	int arr[MAX], count, key, *ptr;

	/* l'utilisateur va taper quelque entier */

	printf("Tapez %d valeurs entières séparées par un appui Entrée.\n", MAX);
	for(count=0; count<MAX; count++)
		scanf("%d", &arr[count]);

	puts("Appuyez sur Entrée pour effecture le tri.");
	getc(stdin);

	/* trie tableau en ordre croissant */
	
	qsort(arr, MAX, sizeof(arr[0]), intcmp);

	/* afficher tableau trié */

	for(count=0; count<MAX; count++)
		printf("\narr[%d] = %d.", count, arr[count]);

	puts("\nAppuyez sur Entrée pour continuer");
	getc(stdin);

	/* entrée une clé de recherche */
	printf("Tapez la valeur à rechercher : ");
	scanf("%d", &key);

	/* effectuer la recherche */

	ptr = (int *)bsearch(&key, arr, MAX, sizeof(arr[0]),intcmp);

	if(ptr != NULL)
		printf("%d trouvé à arr[%d].\n", key ,(ptr - arr));
	else
		printf("%d non trouvé.\n", key);

	exit(EXIT_SUCCESS);
}

int intcmp(const void *v1, const void *v2)
{
	return (*(int *)v1 - *(int *)v2);
}

