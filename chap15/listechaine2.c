#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char name[20];
	struct data *next;
};

struct data *head = NULL;
struct data *new = NULL;
struct data *current =  NULL;
int main(){
	 
	 /* premier elements*/
	 new = malloc(sizeof(struct data));
	 new->next = head;
	 head = new;
	 strcpy(new->name, "PREMIER");

	 /* en fin */
	 current = head;
	 while(current->next != NULL)
		 {
			 current = current->next;
		 }
	 new = malloc(sizeof(struct data));
	 current->next = new;
	 new->next = NULL;
	 	 strcpy(new->name, "fin");
	/* au milieu */
	new = malloc(sizeof(struct data));
	new->next = head->next;
	head->next = new;
	strcpy(new->name, "milieu");

/* afficher */

current = head;
while(current != NULL){
	printf("\n%s\n", current->name);
	current = current->next;
	}
	exit(EXIT_SUCCESS);
}


