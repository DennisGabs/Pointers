/*
	1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 10;
	int b = 10;
	int *aPointer = &a;
	int *bPointer = &b;
	if(aPointer > bPointer){
		printf("O endereco de A é maior %p\n", (void *)aPointer);
	} else if(aPointer < bPointer){
		printf("O endereco de B é maior %p\n", (void *)bPointer);
	} else {
		printf("O endereco de A %p é igual ao de B %p\n", (void *)aPointer, (void *)bPointer);
	}
	printf("================================\n");
	printf("Endereco de A %p \nEndereco de B %p\n", (void *)aPointer, (void *)bPointer);
	// o exemplo abaixo é a mesma coisa da linha acima mas pode ter alguns problemas dependendo do compiler
	printf("Endereco de A %p \nEndereco de B %p\n", &a, &b); 
	return 0;
}