#include <stdlib.h>
#include <stdio.h>

void main(){
	int vet[5] = {1, 2, 3, 4, 5};
	int *p = vet;
	int i;
	for(i = 0; i < 5; i++){
		printf("%d\t", *(p+i));
	}
}