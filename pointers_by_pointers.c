#include <stdlib.h>
#include <stdio.h>

void main(){
	int x = 10;
	int *p1 = &x;
	int **p2 = &p1;

	printf("%p\n" , *p1);
	printf("%p\n" , *p2);
	printf("%d\n" , *p1);
	printf("%d\n" , **p2);
}