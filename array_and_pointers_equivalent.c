#include <stdlib.h>
#include <stdio.h>

void main(){
	int vet[5] = {1, 2, 3, 4, 5};
	int *p, indice = 2;
	p = vet;
	printf("%d\n", *p);
	printf("%d\n", vet[0]);

	printf("%d\n", *(p+indice));
	printf("%d\n", vet[indice]);

	printf("%d\n", vet);
	printf("%d\n", &vet[0]);

	printf("%d\n", &vet[indice]);
	printf("%d\n", (vet+indice));
}