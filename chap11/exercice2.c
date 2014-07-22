#include <stdio.h>
#include <stdlib.h>

struct data {
	int x;
	float a;
	float b;
	}info;

info.x = 100;

struct data *ptr;
ptr = &info;

(*ptr).a = 5.5

ptr->x= 5.5

