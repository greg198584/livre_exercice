#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clear_kb(void);

struct data{
	char name[10];
	struct data *next;
	};

typedef struct data PERSON;
typedef PERSON *LINK;

LINK head  = NULL;
LINK current = NULL;
LINK new = NULL;

int main(){

	int i, x=0;
	char mot[50];
	char mot_autre[10];

	printf("\nRentrez un mot :");
	fgets(mot, sizeof(mot), stdin);
	i=0;
	while(mot[i] && mot[i] != '\n')i++;
	mot[i] = '\0';
	
		new = malloc(sizeof(PERSON));
		new->next = head;
		head = new;
		strcpy(new->name, mot);
		
		for(x=0;x<10;x++){
			printf("\nRentrez un autre mot : ");
			scanf("%20s", mot_autre);

		current = head;
			while(current->next != NULL)
				{
				current = current->next;
				}
		new = malloc(sizeof(PERSON));
		current->next = new;
		new->next =NULL;
		strcpy(new->name, mot_autre);
		}
	/* afficher */
	current = head;
	
	while(current != NULL)
	{
		printf("%s\n", current->name);
		current = current->next;
	}
	exit(EXIT_SUCCESS);
}

void clear_kb(){
	char buffer[80];
	fgets(buffer, sizeof(buffer), stdin);
	}
