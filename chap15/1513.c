/* implémenter une liste chainée */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* structure d'un maillon */
struct list
	{
		int ch; /* on utilise un int pour stocker un caractere */
		struct list *next_rec;
	};

/* les typedef pour la structure et ses pointeurs */
typedef struct list LIST;
typedef LIST *LISTPTR;

/* prototype des fonctions*/

LISTPTR add_to_list( int, LISTPTR);
void show_list(LISTPTR);
void free_memory_list(LISTPTR);

int main()
{
	LISTPTR first = NULL; /* poiteur de tete */
	int i = 0;
	int ch;
	char trash[256]; /* pour effacer le buffer stdin */

	while( i++ < 5) /* contruire une liste de 5 elements */
	{
		ch = 0;
		printf("\nEntrez un caractère %d, ", i);

		do
		{
			printf("\nvaleurs entre a et z, svp: ");
			ch = getc(stdin);
			fgets(trash, sizeof(trash), stdin);
		} while ((ch < 'a' || ch > 'z') &&  (ch < 'A' || ch > 'Z'));
		first = add_to_list(ch, first);
	}

	show_list( first);
	free_memory_list(first);
	exit(EXIT_SUCCESS);
}

/* fonction add_to_list :
 * inserer un nouveau maillon dans la liste.
 * entree : ch caractere a inserer
 * 			LISTPTR first : adresse pointeur de tete
 * retour : adresse du pointeur de tete */

LISTPTR add_to_list(int ch, LISTPTR first){
	LISTPTR new_rec = NULL;
	LISTPTR tmp_rec = NULL;
	LISTPTR prev_rec = NULL;

	new_rec = malloc(sizeof(LIST));
	if (!new_rec) /* si plus de memoire */
	{
		printf("\nMémoire insuffisante\n");
		exit(EXIT_FAILURE);
	}
/* chainer les données */
	new_rec->ch = ch;
	new_rec->next_rec = NULL;

	if(first == NULL) /* ajout du premier maillon a lister */
		{
			first = new_rec;
			new_rec->next_rec = NULL;
		}
		else
			{
			if (new_rec->ch < first->ch)
				{	/* voir s'il doit preceder le premier element */
				first = new_rec;
				}
			else /* il faut l'ajouter au milieu ou la fin */
				{
				tmp_rec = first->next_rec;
				prev_rec = first;
			/* voir ou on doit l'inserer */
				if( tmp_rec == NULL)
					{
					prev_rec->next_rec = new_rec;
					}
				else
					{
					/* au milieu ? */
					while ((tmp_rec->next_rec != NULL))
						{
						if (new_rec->ch < tmp_rec->ch)
							{
								new_rec->next_rec = tmp_rec;
								if(new_rec->next_rec != prev_rec->next_rec)
								{
									printf("ERREUR");
									getc(stdin);
									exit(0);
								}
							prev_rec->next_rec = new_rec;
							break; 
							}
						else 
							{
							tmp_rec = tmp_rec->next_rec;
							prev_rec = prev_rec->next_rec;
							}
						}
						/* voir si ajout a la fin */
						if(tmp_rec->next_rec == NULL)
							{
							if(new_rec->ch < tmp_rec->ch)
								{
								new_rec->next_rec = tmp_rec;
								prev_rec->next_rec = new_rec;
								}
							else
								{
								tmp_rec->next_rec = new_rec;
								new_rec->next_rec = NULL;
								}
							}
						}
					}
				}
				return(first);
	}

void show_list(LISTPTR first){
	LISTPTR cur_ptr;
	int counter= 1;

	printf("\n\nAdr élém   Position  Val.  Adr élém Suivan\n");
		printf("========== ========  ====  ============\n");

		cur_ptr = first;
		while(cur_ptr != NULL)
		{
			printf("  %X ", cur_ptr);
			printf(" %2i       %c", counter++, cur_ptr->ch);
			printf("      %X    \n", cur_ptr->next_rec);
			cur_ptr = cur_ptr->next_rec;
		}
	}

void free_memory_list(LISTPTR first){
	LISTPTR cur_ptr , next_rec;
	cur_ptr = first;

	while (cur_ptr != NULL)
	{
		next_rec = cur_ptr->next_rec;
		free(cur_ptr);
		cur_ptr= next_rec;
	}
}
