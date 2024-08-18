#include <stdlib.h>
#include <stdio.h>

void main(){
	int *p;
	int y = 10;
	p = &y;
	*p = 12;

	printf("%d\n", y);
	printf("%d\n", *p);

}