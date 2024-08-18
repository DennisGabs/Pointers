#include <stdlib.h>
#include <stdio.h>

void main(){
	void *pp;
	int *p1, p2 = 10;
	p1 = &p2;
	pp = &p2;
	printf("Endereco em pp: %p \n", pp);
	pp = &p1;
	printf("Endereco em pp: %p \n", pp);
	pp = p1;
	printf("Endereco em pp: %p \n", pp);

	printf("Valor guardado em pp: %d \n", *(int *)pp);
}