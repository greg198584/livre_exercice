#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	int var = 1;
	char x = 65;

	int resultat;

	printf("\n[ var ] isalnum  : %d ",  resultat=isalnum(var));
	printf("\n[ var ] isalpha  : %d ",  resultat=isalpha(var));
	printf("\n[ var ] isascii  : %d ",  resultat=isascii(var));
	printf("\n[ var ] iscntrl  : %d ",  resultat=iscntrl(var));
	printf("\n[ var ] isdigit  : %d ",  resultat=isdigit(var));
	printf("\n[ var ] isgraph  : %d ",  resultat=isgraph(var));
	printf("\n[ var ] islower  : %d ",  resultat=islower(var));
	printf("\n[ var ] isprint  : %d ",  resultat=isprint(var));
	printf("\n[ var ] ispunct  : %d ",  resultat=ispunct(var));
	printf("\n[ var ] isspace  : %d ",  resultat=isspace(var));
	printf("\n[ var ] isupper  : %d ",  resultat=isupper(var));
	printf("\n[ var ] isxdigit : %d ",  resultat=isxdigit(var));
	
	printf("\n[ char x ] isalnum  : %d ",  resultat=isalnum(x));
	printf("\n[ char x ] isalpha  : %d ",  resultat=isalpha(x));
	printf("\n[ char x ] isascii  : %d ",  resultat=isascii(x));
	printf("\n[ char x ] iscntrl  : %d ",  resultat=iscntrl(x));
	printf("\n[ char x ] isdigit  : %d ",  resultat=isdigit(x));
	printf("\n[ char x ] isgraph  : %d ",  resultat=isgraph(x));
	printf("\n[ char x ] islower  : %d ",  resultat=islower(x));
	printf("\n[ char x ] isprint  : %d ",  resultat=isprint(x));
	printf("\n[ char x ] ispunct  : %d ",  resultat=ispunct(x));
	printf("\n[ char x ] isspace  : %d ",  resultat=isspace(x));
	printf("\n[ char x ] isupper  : %d ",  resultat=isupper(x));
	printf("\n[ char x ] isxdigit : %d ",  resultat=isxdigit(x));
	
	}
