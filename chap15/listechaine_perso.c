#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

void print_string(void);
void ajout_maillon(int x);
void ajout_maillon_premier(void);
void ajout_maillon_fin(void);
int choix_menu(void);


struct data {
	char name[20];
	struct data *next;
	};

typedef struct data PERSON;
typedef PERSON *LINK;

LINK head = NULL;
LINK current = NULL;
LINK new = NULL;

char mot[MAX];

int main(){
	int i;
	int position = 0;
	int reponse;
		
		while(1){
		printf("\n***************************************\n");
		printf("\nEntrer un mot : ");
		fflush(stdin);
		scanf("%49s", mot);
	
			reponse = choix_menu();
			switch(reponse){
				case 1:
					{
						printf("\nVOUS AVEZ INSCRIT VOTRE PREMIER MOT");
						ajout_maillon_premier();
						break;
					}
				case 2:
					{
						printf("\nVOUS RAJOUTER UN MOT");
						printf("\nEn quel position le voulait vous \? :");
						fflush(stdin);
						scanf("%d", &position);
						ajout_maillon(position);
						break;
					}
				case 3:
					{
						printf("\nAJOUTER MAILLON A LA FIN");
						ajout_maillon_fin();
						break;
						}
				case 4:
					{
						printf("\nVOUS VOULEZ AFFICHER LA CHAINE");
						print_string();
						break;
					}
				case 5:
					{
						printf("\nVOUS AVEZ DECIDER DE SORTIR, AU REVOIR !!!\n");
						exit(EXIT_SUCCESS);
					}
				default:
					{
						printf("\nCHOIX INCOMPRIS");
						break;				
					}
				}
				}
		}
void ajout_maillon_premier(void){
	new = malloc(sizeof(PERSON));
	new->next = head;
	head = new;
	strcpy(new->name, mot);
	}


void ajout_maillon(int x){
	int count;
	int i = x;
			for(count=1;count<i;++count)
				{
				current = current->next;
				}
			new = malloc(sizeof(PERSON));
			new->next = current->next;
			current->next = new;
			strcpy(new->name, mot);
			
		}

void ajout_maillon_fin(void){
	current = head;
	while(current->next != NULL){
		current = current->next;
		}
	new = malloc(sizeof(PERSON));
	current->next = new;
	new->next = NULL;
	strcpy(new->name, mot);
	}

void print_string(void){
printf("\n******** AFFICHAGE ********\n");
	current = head;
	while (current != NULL){
		printf("%s\n", current->name);
		current = current->next;
	
	}
}

int choix_menu(void){
	int reponse;
	printf("\n**********************************************");
	printf("\n******************** MENU ********************");
	printf("\n\n--- Si c'est votre premier mot : taper 1 ");
	printf("\n\n--- Mettre au milieu           : taper 2 ");
	printf("\n\n--- Mettre a la fin            : taper 3 ");
	printf("\n\n--- Si vous voulez afficher    : taper 4 ");
	printf("\n\n----Taper 5 pour sortir : ");
	scanf("\n%d", &reponse);

	return reponse;
	}
