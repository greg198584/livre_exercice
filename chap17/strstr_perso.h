
char* monstrstr(const char* chaine, const char* chaineARechercher);

char* monstrstr(const char* chaine, const char* chaineARechercher)
{
	    int i = 0, j = 0, nombreDeCaracteres = 0;
	    char caractereActuel = 0;
	    char* pointeur = NULL;
	 
	 
	    do
	    {
		        caractereActuel = chaineARechercher[nombreDeCaracteres];
		        nombreDeCaracteres++;
		    } while (caractereActuel != '\0');
		    nombreDeCaracteres --;
		 
		 
		    do
		    {
			        /*
			        Si le caractere de la chaine à rechercher et le même que celui de la chaine etudiee, :
			        - le pointeur prend la valeur de l'adresse de ce caractere
			        - on incremente j pour etudier le caractere suivant
			 
			        Et de toute façon, on incrment i pour passer au caractere suivant dans la chaine etudiee.
			        */
			        if (chaineARechercher[j] == chaine[i])
			        {
				            pointeur = &chaine[i - j];
				            /*
				            Pour que le pointeur garde toujours la meme valeur, on on le défini à chaque fois sur chaine[i - j]
				            Par exemple : si on est au 7°caractere de chaine et 
							que l'on est au 3° caractere de la chaineARechercher,
				            
							• i = 6 et j = 2
				            • le pointeur va designer l'adresse de chaine[] pour laquelle les caracteres 
								ont commence a correspondre, a savoir :
				                • chaine[i - j]
				                = chaine[6 - 2]
				                = chaine[4] */
				            
								j++; // On passe au caractere suivant dans chaineARechercher
				        }
				        else // Si A n'importe quel moment un des caracteres differe :
				        {
					            pointeur = NULL; // On ermet le pointeur a vide
					            j = 0;
					        }
					        i++; // On passe au caractere suivant dans chaine
					 
					    } while (chaineARechercher[j] != '\0' && chaine[i + nombreDeCaracteres - 1] != '\0'); 
					// On repete la boucle tant que l'on est pas tombe sur \0, que ce soit dans chaine ou dans chaineARechercher
					 
					    return pointeur;
					 }
