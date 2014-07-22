/* exercice liste chainée enregistrer trois mot */
/* A FAIRE */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*fonction affichage liste chaine */
void print_list(void);
/* structure d'un maillon */
struct data{
	char name[20];
	struct data *next;
};
/*definition des typedef de la structure et d'un pointeur vers celle-ci  */
typedef struct data PERSON;
typedef PERSON *LINK;
/* pointeur de tete head , nouvel element next, et courant current */
LINK head = NULL;
LINK current = NULL;
LINK new = NULL;
LINK current1 = NULL;
int main(){
/* ajout du premier element */
new = malloc(sizeof(PERSON));
new->next = head;
head  = new;
strcpy(new->name, "PREMIERE POSITION");
/* ajout element fin de liste */
current = head;
while(current->next !=NULL)
	{
	current = current->next;
	}
	new = malloc(sizeof(PERSON));
	current->next = new;
	new->next = NULL;
	strcpy(new->name, "EN DERNIER");
/* ajout element au milieu */

new = malloc(sizeof(PERSON));
new->next = head->next;
head->next = new;
strcpy(new->name, "AU MILIEU");

printf("\n************** AFFICHE LIST *****************\n");
	print_list();

printf("\nSupprimer fin \n\n");
	current = head;
	current1 = current->next;
	while(current1->next !=NULL)
		{
			current = current1;
			current1 = current1->next;
		}
		current->next = NULL;
		if(head == current)
			head == NULL;
	print_list();

exit(EXIT_SUCCESS);
}


void print_list(void){
/* afficher tous les maillons dans l'ordre */
current = head;
while (current != NULL){
	printf("%s\n", current->name);
	current = current->next;
	}
}

