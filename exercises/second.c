/*
2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do
teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior ende-
reço.
*/

#include <stdio.h>
#include <stdlib.h>

void main(){
	int b, a;
	scanf("%d", &b);
	scanf("%d", &a);

	if(&a > &b){
		printf("O endereco de A é maior %p\n", &a);
	} else if(&a < &b){
		printf("O endereco de B é maior %p\n", &b);
	} else {
		printf("O endereco de A %p é igual ao de B %p\n", &a, &b);
	}
	printf("=================\n");
	printf("Endereco de A %p \nEndereco de B %p\n", &a, &b);
}