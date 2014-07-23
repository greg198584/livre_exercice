/* ce code doit etre modifier le resultat obtenu est celui voulu 
 * mais ce n'est pas l'exercice demander .
 *
 * Exercice :
 *
 * Ecrivez une fonction à laquelle on passe un nombre variable de chaine de caractères en argument,
 * qui concatène ces chaines , dans l'ordre , en une seule et unique chaine .
 * Et renvoie un pointeur vers la nouvelle chaine 
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

void *conca_strings(int num, ...);


int main()
	{
		char str1[] = "Premier chaine ";
		char str2[] = "Deuxieme chaine";
		char *ptr_string;
		
		conca_strings(2, str1, str2);
		
		exit(EXIT_SUCCESS);
	}


void *conca_strings(int num, ...)
{
	va_list arg_ptr;
	int count;
	char str3[80];

	va_start(arg_ptr, num);

	
	for(count=0; count<num; count++)
	{
		strcpy(str3, va_arg(arg_ptr, char*));
		printf("%s", str3);
	}
	printf("\n");
}
